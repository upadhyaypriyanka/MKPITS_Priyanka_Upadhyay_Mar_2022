using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using calculatelibrary;

namespace _26_august_add_sub_using_class_library
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        calculate c = new calculate();
        private void button1_Click(object sender, EventArgs e)
        {
            int r = c.addition(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label3.Text = " Addition of two number is = " + r;
        }

        private void button2_Click(object sender, EventArgs e)
        {

            int r = c.Substraction(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label3.Text = " Substraction of two number is = " + r;
        }

        private void button3_Click(object sender, EventArgs e)
        {

            int r = c.Multiplication(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label3.Text = " Multiplication of two number is = " + r;
        }

        private void button4_Click(object sender, EventArgs e)
        {

            int r = c.Division(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label3.Text = " Division of two number is = " + r;
        }
    }
}
