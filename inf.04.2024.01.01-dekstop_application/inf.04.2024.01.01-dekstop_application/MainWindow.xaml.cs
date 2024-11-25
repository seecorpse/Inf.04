using System;
using System.IO;
using System.Windows;

namespace PassportApp
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }
        private void txtNumber_LostFocus(object sender, RoutedEventArgs e)
        {
            string number = txtNumber.Text.Trim();
            string personImagePath = $"{number}-zdjecie.jpg";
            string fingerprintImagePath = $"{number}-odcisk.jpg";
            if (File.Exists(personImagePath))
            {
                imgPerson.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri(personImagePath, UriKind.Relative));
            }
            else
            {
                imgPerson.Source = null;
            }

            if (File.Exists(fingerprintImagePath))
            {
                imgFingerprint.Source = new System.Windows.Media.Imaging.BitmapImage(new Uri(fingerprintImagePath, UriKind.Relative));
            }
            else
            {
                imgFingerprint.Source = null;
            }
        }
        private void btnOk_Click(object sender, RoutedEventArgs e)
        {
            string firstName = txtFirstName.Text.Trim();
            string lastName = txtLastName.Text.Trim();
            string eyeColor = "";
            if (rbBlue.IsChecked == true) eyeColor = "niebieskie";
            else if (rbGreen.IsChecked == true) eyeColor = "zielone";
            else if (rbBrown.IsChecked == true) eyeColor = "piwne";
            if (string.IsNullOrEmpty(firstName) || string.IsNullOrEmpty(lastName))
            {
                MessageBox.Show("Wprowadź dane", "Błąd", MessageBoxButton.OK, MessageBoxImage.Warning);
            }
            else
            {
                string message = $"{firstName} {lastName} kolor oczu {eyeColor}";
                MessageBox.Show(message, "Informacja", MessageBoxButton.OK, MessageBoxImage.Information);
            }
        }
    }
}
