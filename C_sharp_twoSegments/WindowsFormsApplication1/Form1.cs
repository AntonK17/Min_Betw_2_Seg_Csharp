using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace twoSegments
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void BtnDone_Click(object sender, EventArgs e)
        {
            Answer popup = new Answer();        //Создаем окно с ответом
            int x1,y1,x2,y2;                    //Задаем переменные для координат
            x1 = Convert.ToInt32(Math.Round(numericUpDown1.Value, 0));
            y1 = Convert.ToInt32(Math.Round(numericUpDown2.Value, 0));
            x2 = Convert.ToInt32(Math.Round(numericUpDown3.Value, 0));
            y2 = Convert.ToInt32(Math.Round(numericUpDown4.Value, 0));  //Конвертируем в int вводимые данные
            cppWrapper.minimumReturner MR = new cppWrapper.minimumReturner(x1, y1, x2, y2);
            popup.lblAnswer.Text = "Minimum distance between two segments is: " + MR.returner().ToString();  //Используем заранее запакованный класс и выводим полученное значение минимума
            popup.ShowDialog();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
