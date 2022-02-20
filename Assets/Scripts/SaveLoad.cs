using UnityEngine;

public class SaveLoad : MonoBehaviour
{
    public Color loadColor(string tag)
    {
        string sColor = PlayerPrefs.GetString(tag, "1,1,1,0");
        string[] cValues = sColor.Split(",");
        float cRed = float.Parse(cValues[0]);
        float cGreen = float.Parse(cValues[1]);
        float cBlue = float.Parse(cValues[2]);
        float cAlpha = float.Parse(cValues[3]);
        return new Color(cRed, cGreen, cBlue, cAlpha);
    }
    public void saveColor(Color sColor, string tag)
    {
        PlayerPrefs.SetString(tag, $"{sColor.r},{sColor.g},{sColor.b},{sColor.a}");
        PlayerPrefs.Save();
    }
}