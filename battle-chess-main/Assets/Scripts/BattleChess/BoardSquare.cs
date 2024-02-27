using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BoardSquare : MonoBehaviour
{
    public GameObject piecePrefab;
    private GameObject currentPiece;
    private List<Material> pieceMaterials;
    private bool isHighlighted;

    // Start is called before the first frame update
    void Start()
    {
        currentPiece = Instantiate(piecePrefab) as GameObject;
        currentPiece.transform.parent = transform;
        currentPiece.transform.localPosition = new Vector3(0, 0.45f, 0);
        //currentPiece.transform.localScale = Vector3.one;

        pieceMaterials = currentPiece.GetComponent<Renderer>().materials.ToList();
        isHighlighted = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnMouseDown()
    {
        if(isHighlighted){
            foreach (var material in pieceMaterials){
                material.DisableKeyword("_EMISSION");
                isHighlighted = false;
            }
        }
        else{
            foreach (var material in pieceMaterials){
                material.EnableKeyword("_EMISSION");
                material.SetColor("_EmissionColor", Color.red);
                isHighlighted = true;
            }
        }
        
    }
}
