using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Oracle.ManagedDataAccess.Client;
using Oracle.DataAccess;

namespace q2
{
    public partial class Form1 : Form
    {
        OracleConnection conn;
        public Form1()
        {
            InitializeComponent();
        }
        public void ConnectDB()
        {
            conn = new OracleConnection("DATA SOURCE=172.16.54.24:1521/ictorcl;USER ID=IT340;PASSWORD=student");
            try
            {
                conn.Open();
                MessageBox.Show("Connected");
            }
            catch (Exception e1)
            {
            }
        }
        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            ConnectDB();
            OracleCommand comm = new OracleCommand(); 
            comm.Connection = conn; 
            comm.CommandText = "SELECT COUNT(DISTINCT DRIVER_ID) FROM ACCIDENT natural join PARTICIPATED where  extract(year from accd_date) = '2008'"; 
            OracleDataReader read = comm.ExecuteReader();
            while (read.Read())
            {
                MessageBox.Show(read["COUNT(DISTINCTDRIVER_ID)"].ToString());
            } 
            read.Close(); 
            conn.Close(); 
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ConnectDB();
            OracleCommand comm1 = new OracleCommand();
            comm1.Connection = conn;
            comm1.CommandText = " SELECT NAME as OWNER_NAME, COUNT(REPORT_NUMBER) as NO_OF_ACCIDENT, SUM(DAMAGE_AMOUNT) as TOTAL_DAMAGE FROM  PERSON,PARTICIPATED WHERE PERSON.DRIVER_ID=PARTICIPATED.DRIVER_ID  GROUP BY NAME ORDER BY TOTAL_DAMAGE DESC";
            comm1.CommandType = CommandType.Text;
            OracleDataReader read = comm1.ExecuteReader();
            OracleDataAdapter da = new OracleDataAdapter(comm1.CommandText, conn); 
            DataSet ds = new DataSet();
            da.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
        }
    }
}
