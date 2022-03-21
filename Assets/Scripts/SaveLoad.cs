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
    }
    public Vector3 loadVector3(string tag)
    {
        string sVect = PlayerPrefs.GetString(tag, "0,0,0");
        string[] sValues = sVect.Split(",");
        float x = float.Parse(sValues[0]);
        float y = float.Parse(sValues[1]);
        float z = float.Parse(sValues[2]);
        return new Vector3(x, y, z);
    }
    public void saveVector3(Vector3 vs, string tag)
    {
        PlayerPrefs.SetString(tag, $"{vs.x},{vs.y},{vs.z}");
    }
    public Quaternion loadRotation(string tag)
    {
        string sRot = PlayerPrefs.GetString(tag, "0,0,0");
        string[] sValues = sRot.Split(",");
        float x = float.Parse(sValues[0]);
        float y = float.Parse(sValues[1]);
        float z = float.Parse(sValues[2]);
        float w = float.Parse(sValues[3]);
        return new Quaternion(x, y, z, w);
    }
    public void saveRotation(string tag, Quaternion qRot)
    {
        PlayerPrefs.SetString(tag, $"{qRot.x},{qRot.y},{qRot.z},{qRot.w}");
    }
}