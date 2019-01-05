#include <stdio.h>
#include <d3d9.h>
#include <windows.h>
#include <unknwn.h>

IDirect3D9* STDMETHODCALLTYPE Direct3DCreate9(UINT nSDKVersion) {
  return nullptr;
}

HRESULT STDMETHODCALLTYPE Direct3DCreate9Ex(UINT nSDKVersion, IDirect3D9Ex** ppDirect3D9Ex) {
  return D3DERR_INVALIDCALL;
}
