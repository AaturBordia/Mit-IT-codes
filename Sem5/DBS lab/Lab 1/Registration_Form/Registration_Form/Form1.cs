using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Registration_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            radioButton1.Checked = true;
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Greetings " + textBox2.Text);
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            String Reg,gender,Branch,Clubs;
            DateTime Date;
            Reg =textBox1.Text;
            if(radioButton1.Checked==true)
                gender=radioButton1.Text;
            else if(radioButton2.Checked==true)
                gender=radioButton2.Text;
            else
                gender=radioButton3.Text;

            Branch=comboBox1.Text;
            Date = dateTimePicker1.Value;
            if(checkBox1.Checked==true)
                Clubs=checkBox1.Text;
            if(checkBox2.Checked==true)
                Clubs=checkBox2.Text + " , " ;
             if(checkBox3.Checked==true)
                Clubs=checkBox3.Text + " , " ;

             Submission_Form f2 = new Submission_Form(textBox2.Text, Reg, gender, Branch, Date, Clubs);
             f2.Show();
        }
    }
}
