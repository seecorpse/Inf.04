   M S B A M L   `   `   `  ����)  %inf.04.2024.01.01-dekstop_application    PassportApp.MainWindow   5   	   W SPresentationCore, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35e aSystem.Windows.Controls.Ribbon, Version=8.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089R NWindowsBase, Version=8.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35F 9http://schemas.microsoft.com/winfx/2006/xaml/presentation     5   	   R NSystem.Xaml, Version=8.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	     � Title$<  6Wprowadzenie danych do paszportu. Wykonał: 0000000000��5   	   $	��400��5   	   $	��600��6   ���#5F9EA0.��5      �  � RowDefinitions 5   
   �� 5	      $
��Auto �6   �� 5
      $��* �6   .+�5   
   �� $��10q�6    �� Orientation$ Vertical=�6!   .+�5      �� $ 
Horizontal=�6   $��5q�62   .+�5      �� $��Numer:��6   $��Center=�6*   $��80��6E   �� 5      -   5         ��Name$ 	txtNumber��5      $	��200��6-   ���#F0FFFF$�� ��6n   5      �� 5      $ 
Horizontal=�6   $��5q�62   .+�5      �� $��Imię:��6   $��Center=�6)   $��80��6D   �� 5      -   5        $ txtFirstName��5      $	��200��60   ���#F0FFFF6<   5      �� 5      $ 
Horizontal=�6   $��5q�62   .+�5      �� $��	Nazwisko:��6   $��Center=�6-   $��80��6H   �� 5      -   5        $ txtLastName��5      $	��200��6/   ���#F0FFFF6;   5      �� 5      $��
Kolor oczu��6   $��5q�6+   .��5      �� .+�5      	� -   5         	�Name$ rbBlue��5   "   $��
niebieskie��62    d� 	IsChecked$
 TrueY�6G   	� 5      -   5        $ rbGreen��5   "   $��zielone��63   	� 5      -   5        $ rbBrown��5   "   $��piwne��63   5       5!      5"      �� 5#   
   $��1��6   $��10q�6"   $ 
Horizontal=�6.   $��Center=�6G   $��Center=�6d   .+�5$      �� -   5         ��Name$ 	imgPerson��5$      $	��150��6'   $	��180��63   $��5q�6@   �� 5%      -   5        $ imgFingerprint��5%      $	��150��6,   $	��180��68   $��5q�6E   5&      �� 5(   
   -	   5         ��Name$ btnOk��5(      $��OK��6   $��1��6-   $��10q�6:   $��Bottom=�6F   $��Center=�6a   $	��100��5)      ���#F0FFFF62   5*      5+      