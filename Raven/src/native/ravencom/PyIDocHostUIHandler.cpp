// This file implements the IDocHostUIHandler Gateway for Python.
// Generated by makegw.py

#include "shell_pch.h"
#include "PyIDocHostUIHandler.h"

// @doc - This file contains autoduck documentation
// ---------------------------------------------------
//
// Gateway Implementation
STDMETHODIMP PyGDocHostUIHandler::ShowContextMenu(
		/* [in] */ DWORD dwID,
		/* [in] */ POINT * ppt,
		/* [in] */ IUnknown * pcmdtReserved,
		/* [in] */ IDispatch * pdispReserved)
{
	PY_GATEWAY_METHOD;
	PyObject *obpcmdtReserved;
	PyObject *obpdispReserved;
	obpcmdtReserved = PyCom_PyObjectFromIUnknown(pcmdtReserved, IID_IUnknown, TRUE);
	obpdispReserved = PyCom_PyObjectFromIUnknown(pdispReserved, IID_IDispatch, TRUE);
	PyObject *obpResult = NULL;
	HRESULT hr=InvokeViaPolicy("ShowContextMenu", &obpResult, "lllOO", dwID, ppt->x, ppt->y, obpcmdtReserved, obpdispReserved);
	Py_XDECREF(obpcmdtReserved);
	Py_XDECREF(obpdispReserved);

	// If the result is an Int, return it. Note that it should be:
	// S_OK = 0 (Handler showed the menu) or
	// S_FALSE = 1 (MSHTML should show the menu)
	hr = S_FALSE;
	if (obpResult != NULL) {
		if (PyInt_Check(obpResult)) {
			hr = PyInt_AsLong(obpResult);
		}
		Py_XDECREF(obpResult);
	}
	return hr;
}

STDMETHODIMP PyGDocHostUIHandler::GetDropTarget(
		/* [in] */ IDropTarget * pDropTarget,
		/* [out] */ IDropTarget ** ppDropTarget)
{
	PY_GATEWAY_METHOD;
	try {
		*ppDropTarget = NULL;
		PyObject *obpdropTargetIn = NULL;
		obpdropTargetIn = PyCom_PyObjectFromIUnknown(pDropTarget, IID_IUnknown, TRUE);
		PyObject *obpResult = NULL;
		HRESULT hr=InvokeViaPolicy("GetDropTarget", &obpResult, "O", obpdropTargetIn);
		Py_XDECREF(obpdropTargetIn);

		hr = S_FALSE;
		if (obpResult != NULL) {
			if (PyCom_InterfaceFromPyObject(obpResult, IID_IDropTarget, (void** )ppDropTarget, TRUE)) {
				hr = S_OK;
			}
			Py_XDECREF(obpResult);
		}
		return hr;
	} catch(...) {
		*ppDropTarget = NULL;
		return S_FALSE;
	}
}

STDMETHODIMP PyGDocHostUIHandler::GetHostInfo(/* [out][in] */ DOCHOSTUIINFO * pInfo)
{
	PY_GATEWAY_METHOD;
	pInfo->cbSize = sizeof(DOCHOSTUIINFO);
	pInfo->dwFlags = DOCHOSTUIFLAG_NO3DBORDER | DOCHOSTUIFLAG_NO3DOUTERBORDER;
	pInfo->dwDoubleClick = DOCHOSTUIDBLCLK_DEFAULT;
	pInfo->pchHostCss = NULL;
	pInfo->pchHostNS = NULL;
	//printf("*************GetHostInfo WAS CALLED!*******************\n");
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::ShowUI(
		/* [in] */ DWORD dwID,
		/* [in] */ IOleInPlaceActiveObject * pActiveObject,
		/* [in] */ IOleCommandTarget * pCommandTarget,
		/* [in] */ IOleInPlaceFrame * pFrame,
		/* [in] */ IOleInPlaceUIWindow * pDoc)
{
	PY_GATEWAY_METHOD;
	return S_FALSE;
}

STDMETHODIMP PyGDocHostUIHandler::HideUI(void)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::UpdateUI(void)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::EnableModeless(/* [in] */ BOOL fEnable)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::OnDocWindowActivate(/* [in] */ BOOL fActivate)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::OnFrameWindowActivate(/* [in] */ BOOL fActivate)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::ResizeBorder(/* [in] */ LPCRECT prcBorder,
											   /* [in] */ IOleInPlaceUIWindow * pUIWindow,
											   /* [in] */ BOOL fRameWindow)
{
	PY_GATEWAY_METHOD;
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::TranslateAccelerator(
		/* [in] */ LPMSG lpMsg,
		/* [in] */ const GUID * pguidCmdGroup,
		/* [in] */ DWORD nCmdID)
{
	PY_GATEWAY_METHOD;
	printf("*************TRANSLATE ACCELERATOR WAS CALLED!*******************\n");
	return S_OK;
}

STDMETHODIMP PyGDocHostUIHandler::GetOptionKeyPath(
		/* [out] */ LPOLESTR * pchKey,
		/* [in] */ DWORD dw)
{
	PY_GATEWAY_METHOD;
	pchKey = NULL;
	return S_FALSE;
}

STDMETHODIMP PyGDocHostUIHandler::GetExternal(
		/* [out] */ IDispatch ** ppDispatch)
{
	PY_GATEWAY_METHOD;
	*ppDispatch = NULL;
	return S_FALSE;
}

STDMETHODIMP PyGDocHostUIHandler::TranslateUrl(
		/* [in] */ DWORD dwTranslate,
		/* [in] */ OLECHAR * pchURLIn,
		/* [out] */ OLECHAR ** ppchURLOut)
{
	PY_GATEWAY_METHOD;
	*ppchURLOut = NULL;
	return S_FALSE;
}

STDMETHODIMP PyGDocHostUIHandler::FilterDataObject(
		/* [in] */ IDataObject * pDO,
		/* [out] */ IDataObject ** ppDORet)
{
	PY_GATEWAY_METHOD;
	*ppDORet = NULL;
	return S_FALSE;
}
