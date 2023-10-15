using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            textBox1.Text = "Hello User ";
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            radioButton1.Checked = true;
            checkBox1.Checked = true;
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("hello" + textBox2.Text);
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            String radiochoice,checkchoice=null;
            if (radioButton1.Checked == true)
            {
                radiochoice = radioButton1.Text;
            }
            else
            {
                radiochoice = radioButton2.Text;
            }
            if (checkBox1.Checked)
            {
                checkchoice = checkchoice+","+checkBox1.Text;
            }
            if (checkBox2.Checked)
            {
                checkchoice = checkchoice + "," + checkBox2.Text;
            }
            if (checkBox3.Checked)
            {
                checkchoice = checkchoice + "," + checkBox3.Text;
            }
            if (checkBox4.Checked)
            {
                checkchoice = checkchoice + "," + checkBox4.Text;
            }
           
            Form2 f2 = new Form2(textBox2.Text, radiochoice, checkchoice, comboBox1.Text);
            f2.Show();
        }
    }
}
