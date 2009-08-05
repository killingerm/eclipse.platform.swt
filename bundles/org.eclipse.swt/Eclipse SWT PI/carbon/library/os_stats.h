/*******************************************************************************
 * Copyright (c) 2000, 2009 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#ifdef NATIVE_STATS
extern int OS_nativeFunctionCount;
extern int OS_nativeFunctionCallCount[];
extern char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#ifndef OS_NATIVE_ENTER
#define OS_NATIVE_ENTER(env, that, func) 
#endif
#ifndef OS_NATIVE_EXIT
#define OS_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	AECoerceDesc_FUNC,
	AECountItems_FUNC,
	AECreateDesc_FUNC,
	AEDisposeDesc_FUNC,
	AEGetDescData_FUNC,
	AEGetNthPtr_FUNC,
	AEInstallEventHandler_FUNC,
	AEProcessAppleEvent_FUNC,
	ATSFontActivateFromFileSpecification_FUNC,
	ATSFontDeactivate_FUNC,
	ATSFontFindFromName_FUNC,
	ATSFontGetHorizontalMetrics_FUNC,
	ATSFontGetName_FUNC,
	ATSFontGetPostScriptName_FUNC,
	ATSFontGetVerticalMetrics_FUNC,
	ATSFontIteratorCreate_FUNC,
	ATSFontIteratorNext_FUNC,
	ATSFontIteratorRelease_FUNC,
	ATSUBatchBreakLines_FUNC,
	ATSUCreateStyle_FUNC,
	ATSUCreateTextLayout_FUNC,
	ATSUCreateTextLayoutWithTextPtr_FUNC,
	ATSUDirectGetLayoutDataArrayPtrFromTextLayout_FUNC,
	ATSUDirectReleaseLayoutDataArrayPtr_FUNC,
	ATSUDisposeStyle_FUNC,
	ATSUDisposeTextLayout_FUNC,
	ATSUDrawText_FUNC,
	ATSUFindFontFromName_FUNC,
	ATSUFindFontName_FUNC,
	ATSUGetFontIDs_FUNC,
	ATSUGetGlyphBounds__IIIIISII_3I_FUNC,
	ATSUGetGlyphBounds__IIIIISILorg_eclipse_swt_internal_carbon_ATSTrapezoid_2_3I_FUNC,
	ATSUGetLayoutControl_FUNC,
	ATSUGetLineControl_FUNC,
	ATSUGetSoftLineBreaks_FUNC,
	ATSUGetTextHighlight_FUNC,
	ATSUGetUnjustifiedBounds_FUNC,
	ATSUGlyphGetQuadraticPaths_FUNC,
	ATSUHighlightText_FUNC,
	ATSUNextCursorPosition_FUNC,
	ATSUOffsetToPosition_FUNC,
	ATSUPositionToOffset_FUNC,
	ATSUPreviousCursorPosition_FUNC,
	ATSUSetAttributes_FUNC,
	ATSUSetFontFeatures_FUNC,
	ATSUSetHighlightingMethod_FUNC,
	ATSUSetLayoutControls_FUNC,
	ATSUSetLineControls_FUNC,
	ATSUSetRunStyle_FUNC,
	ATSUSetSoftLineBreak_FUNC,
	ATSUSetTabArray_FUNC,
	ATSUSetTextPointerLocation_FUNC,
	ATSUSetTransientFontMatching_FUNC,
	ATSUTextDeleted_FUNC,
	ATSUTextInserted_FUNC,
	AXNotificationHIObjectNotify_FUNC,
	AXUIElementCopyAttributeValue_FUNC,
	AXUIElementCreateWithDataBrowserAndItemInfo_FUNC,
	AXUIElementCreateWithHIObjectAndIdentifier_FUNC,
	AXUIElementGetDataBrowserItemInfo_FUNC,
	AXUIElementGetHIObject_FUNC,
	AXUIElementGetIdentifier_FUNC,
	AXValueCreate_FUNC,
	AXValueGetValue_FUNC,
	AcquireFirstMatchingEventInQueue_FUNC,
	ActivateTSMDocument_FUNC,
	ActiveNonFloatingWindow_FUNC,
	AddDataBrowserItems_FUNC,
	AddDataBrowserListViewColumn_FUNC,
	AddDragItemFlavor_FUNC,
	AppendMenuItemTextWithCFString_FUNC,
	AutoSizeDataBrowserListViewColumns_FUNC,
	BringToFront_FUNC,
	CFArrayAppendValue_FUNC,
	CFArrayCreateMutable_FUNC,
	CFArrayGetCount_FUNC,
	CFArrayGetValueAtIndex_FUNC,
	CFDataGetBytePtr_FUNC,
	CFDataGetBytes_FUNC,
	CFDataGetLength_FUNC,
	CFDictionaryGetValueIfPresent_FUNC,
	CFEqual_FUNC,
	CFLocaleCopyCurrent_FUNC,
	CFNumberFormatterCopyProperty_FUNC,
	CFNumberFormatterCreate_FUNC,
	CFRelease_FUNC,
	CFRetain_FUNC,
	CFRunLoopAddObserver_FUNC,
	CFRunLoopAddSource_FUNC,
	CFRunLoopObserverCreate_FUNC,
	CFRunLoopObserverInvalidate_FUNC,
	CFRunLoopRunInMode_FUNC,
	CFRunLoopSourceCreate_FUNC,
	CFRunLoopSourceInvalidate_FUNC,
	CFRunLoopSourceSignal_FUNC,
	CFRunLoopStop_FUNC,
	CFRunLoopWakeUp_FUNC,
	CFStringCreateWithBytes_FUNC,
	CFStringCreateWithCharacters__III_FUNC,
	CFStringCreateWithCharacters__I_3CI_FUNC,
	CFStringGetBytes_FUNC,
	CFStringGetCharacters_FUNC,
	CFStringGetLength_FUNC,
	CFStringGetSystemEncoding_FUNC,
	CFURLCopyFileSystemPath_FUNC,
	CFURLCopyLastPathComponent_FUNC,
	CFURLCopyPathExtension_FUNC,
	CFURLCreateCopyAppendingPathComponent_FUNC,
	CFURLCreateCopyAppendingPathExtension_FUNC,
	CFURLCreateCopyDeletingLastPathComponent_FUNC,
	CFURLCreateData_FUNC,
	CFURLCreateFromFSRef_FUNC,
	CFURLCreateFromFileSystemRepresentation_FUNC,
	CFURLCreateStringByAddingPercentEscapes_FUNC,
	CFURLCreateStringByReplacingPercentEscapes_FUNC,
	CFURLCreateWithBytes_FUNC,
	CFURLCreateWithFileSystemPath_FUNC,
	CFURLCreateWithString_FUNC,
	CFURLGetFSRef_FUNC,
	CGAffineTransformConcat_FUNC,
	CGAffineTransformInvert_FUNC,
	CGAffineTransformMake_FUNC,
	CGAffineTransformRotate_FUNC,
	CGAffineTransformScale_FUNC,
	CGAffineTransformTranslate_FUNC,
	CGBitmapContextCreate_FUNC,
	CGBitmapContextCreateImage_FUNC,
	CGColorCreate_FUNC,
	CGColorRelease_FUNC,
	CGColorSpaceCreateDeviceRGB_FUNC,
	CGColorSpaceCreatePattern_FUNC,
	CGColorSpaceRelease_FUNC,
	CGContextAddArc_FUNC,
	CGContextAddArcToPoint_FUNC,
	CGContextAddLineToPoint_FUNC,
	CGContextAddLines_FUNC,
	CGContextAddPath_FUNC,
	CGContextAddRect_FUNC,
	CGContextBeginPath_FUNC,
	CGContextClearRect_FUNC,
	CGContextClip_FUNC,
	CGContextClosePath_FUNC,
	CGContextConcatCTM_FUNC,
	CGContextDrawImage_FUNC,
	CGContextDrawShading_FUNC,
	CGContextEOClip_FUNC,
	CGContextEOFillPath_FUNC,
	CGContextFillPath_FUNC,
	CGContextFillRect_FUNC,
	CGContextFlush_FUNC,
	CGContextGetCTM_FUNC,
	CGContextGetInterpolationQuality_FUNC,
	CGContextGetPathBoundingBox_FUNC,
	CGContextGetTextPosition_FUNC,
	CGContextMoveToPoint_FUNC,
	CGContextRelease_FUNC,
	CGContextRestoreGState_FUNC,
	CGContextRotateCTM_FUNC,
	CGContextSaveGState_FUNC,
	CGContextScaleCTM_FUNC,
	CGContextSelectFont_FUNC,
	CGContextSetAlpha_FUNC,
	CGContextSetBlendMode_FUNC,
	CGContextSetFillColor_FUNC,
	CGContextSetFillColorSpace_FUNC,
	CGContextSetFillPattern_FUNC,
	CGContextSetFont_FUNC,
	CGContextSetFontSize_FUNC,
	CGContextSetInterpolationQuality_FUNC,
	CGContextSetLineCap_FUNC,
	CGContextSetLineDash_FUNC,
	CGContextSetLineJoin_FUNC,
	CGContextSetLineWidth_FUNC,
	CGContextSetMiterLimit_FUNC,
	CGContextSetRGBFillColor_FUNC,
	CGContextSetRGBStrokeColor_FUNC,
	CGContextSetRenderingIntent_FUNC,
	CGContextSetShouldAntialias_FUNC,
	CGContextSetShouldSmoothFonts_FUNC,
	CGContextSetStrokeColor_FUNC,
	CGContextSetStrokeColorSpace_FUNC,
	CGContextSetStrokePattern_FUNC,
	CGContextSetTextDrawingMode_FUNC,
	CGContextSetTextMatrix_FUNC,
	CGContextSetTextPosition_FUNC,
	CGContextShowText_FUNC,
	CGContextShowTextAtPoint_FUNC,
	CGContextStrokePath_FUNC,
	CGContextStrokeRect_FUNC,
	CGContextSynchronize_FUNC,
	CGContextTranslateCTM_FUNC,
	CGCursorIsVisible_FUNC,
	CGDataProviderCreateWithData_FUNC,
	CGDataProviderCreateWithURL_FUNC,
	CGDataProviderRelease_FUNC,
	CGDisplayBaseAddress_FUNC,
	CGDisplayBitsPerPixel_FUNC,
	CGDisplayBitsPerSample_FUNC,
	CGDisplayBounds_FUNC,
	CGDisplayBytesPerRow_FUNC,
	CGDisplayHideCursor_FUNC,
	CGDisplayPixelsHigh_FUNC,
	CGDisplayPixelsWide_FUNC,
	CGDisplayShowCursor_FUNC,
	CGFontCreateWithPlatformFont_FUNC,
	CGFontRelease_FUNC,
	CGFunctionCreate_FUNC,
	CGFunctionRelease_FUNC,
	CGGetDisplaysWithRect_FUNC,
	CGImageCreate_FUNC,
	CGImageCreateWithImageInRect_FUNC,
	CGImageCreateWithJPEGDataProvider_FUNC,
	CGImageCreateWithPNGDataProvider_FUNC,
	CGImageGetAlphaInfo_FUNC,
	CGImageGetBitsPerComponent_FUNC,
	CGImageGetBitsPerPixel_FUNC,
	CGImageGetBytesPerRow_FUNC,
	CGImageGetColorSpace_FUNC,
	CGImageGetDataProvider_FUNC,
	CGImageGetHeight_FUNC,
	CGImageGetWidth_FUNC,
	CGImageRelease_FUNC,
	CGMainDisplayID_FUNC,
	CGPathAddArc_FUNC,
	CGPathAddCurveToPoint_FUNC,
	CGPathAddLineToPoint_FUNC,
	CGPathAddPath_FUNC,
	CGPathAddQuadCurveToPoint_FUNC,
	CGPathAddRect_FUNC,
	CGPathApply_FUNC,
	CGPathCloseSubpath_FUNC,
	CGPathCreateMutable_FUNC,
	CGPathCreateMutableCopy_FUNC,
	CGPathGetBoundingBox_FUNC,
	CGPathGetCurrentPoint_FUNC,
	CGPathIsEmpty_FUNC,
	CGPathMoveToPoint_FUNC,
	CGPathRelease_FUNC,
	CGPatternCreate_FUNC,
	CGPatternRelease_FUNC,
	CGPointApplyAffineTransform_FUNC,
	CGPostKeyboardEvent_FUNC,
	CGPostMouseEvent_FUNC,
	CGPostScrollWheelEvent_FUNC,
	CGRectContainsPoint_FUNC,
	CGShadingCreateAxial_FUNC,
	CGShadingCreateRadial_FUNC,
	CGShadingRelease_FUNC,
	CGSizeApplyAffineTransform_FUNC,
	CGWarpMouseCursorPosition_FUNC,
	CPSEnableForegroundOperation_FUNC,
	CPSSetProcessName_FUNC,
	CalcMenuSize_FUNC,
	Call_FUNC,
	CallNextEventHandler_FUNC,
	CancelMenuTracking_FUNC,
	ChangeMenuItemAttributes_FUNC,
	ChangeWindowAttributes_FUNC,
	ClearCurrentScrap_FUNC,
	ClearKeyboardFocus_FUNC,
	ClearMenuBar_FUNC,
	ClipCGContextToRegion_FUNC,
	CloseDataBrowserContainer_FUNC,
	ClosePicture_FUNC,
	CloseRgn_FUNC,
	CollapseWindow_FUNC,
	ContextualMenuSelect_FUNC,
	ConvertEventRefToEventRecord_FUNC,
	ConvertFromPStringToUnicode_FUNC,
	ConvertFromUnicodeToPString_FUNC,
	CopyBits_FUNC,
	CopyControlTitleAsCFString_FUNC,
	CopyMenuItemTextAsCFString_FUNC,
	CopyRgn_FUNC,
	CountDragItemFlavors_FUNC,
	CountDragItems_FUNC,
	CountMenuItems_FUNC,
	CountSubControls_FUNC,
	CreateBevelButtonControl_FUNC,
	CreateCGContextForPort_FUNC,
	CreateCheckBoxControl_FUNC,
	CreateClockControl_FUNC,
	CreateDataBrowserControl_FUNC,
	CreateEditUnicodeTextControl_FUNC,
	CreateEvent_FUNC,
	CreateGroupBoxControl_FUNC,
	CreateIconControl_FUNC,
	CreateLittleArrowsControl_FUNC,
	CreateNewMenu_FUNC,
	CreateNewWindow_FUNC,
	CreatePopupArrowControl_FUNC,
	CreatePopupButtonControl_FUNC,
	CreateProgressBarControl_FUNC,
	CreatePushButtonControl_FUNC,
	CreatePushButtonWithIconControl_FUNC,
	CreateRadioButtonControl_FUNC,
	CreateRootControl_FUNC,
	CreateScrollBarControl_FUNC,
	CreateSeparatorControl_FUNC,
	CreateSliderControl_FUNC,
	CreateStandardAlert_FUNC,
	CreateStaticTextControl_FUNC,
	CreateTabsControl_FUNC,
	CreateTextToUnicodeInfoByEncoding_FUNC,
	CreateUnicodeToTextInfoByEncoding_FUNC,
	CreateUserPaneControl_FUNC,
	CreateWindowGroup_FUNC,
	DataBrowserChangeAttributes_FUNC,
	DataBrowserGetAttributes_FUNC,
	DataBrowserGetMetric_FUNC,
	DataBrowserSetMetric_FUNC,
	DeactivateTSMDocument_FUNC,
	DeleteGlobalRef_FUNC,
	DeleteMenu_FUNC,
	DeleteMenuItem_FUNC,
	DeleteMenuItems_FUNC,
	DeleteTSMDocument_FUNC,
	DiffRgn_FUNC,
	DisableControl_FUNC,
	DisableMenuCommand_FUNC,
	DisableMenuItem_FUNC,
	DisposeControl_FUNC,
	DisposeDrag_FUNC,
	DisposeGWorld_FUNC,
	DisposeHandle_FUNC,
	DisposeMenu_FUNC,
	DisposePtr_FUNC,
	DisposeRgn_FUNC,
	DisposeTextToUnicodeInfo_FUNC,
	DisposeUnicodeToTextInfo_FUNC,
	DisposeWindow_FUNC,
	DrawControlInCurrentPort_FUNC,
	DrawMenuBar_FUNC,
	DrawPicture_FUNC,
	DrawThemeButton_FUNC,
	DrawThemeEditTextFrame_FUNC,
	DrawThemeFocusRect_FUNC,
	DrawThemePopupArrow_FUNC,
	DrawThemeSeparator_FUNC,
	DrawThemeTextBox_FUNC,
	EmbedControl_FUNC,
	EmptyRect_FUNC,
	EmptyRgn_FUNC,
	EnableControl_FUNC,
	EnableMenuCommand_FUNC,
	EnableMenuItem_FUNC,
	EraseRect_FUNC,
	FMGetATSFontRefFromFont_FUNC,
	FMGetFontFamilyFromName_FUNC,
	FMGetFontFamilyInstanceFromFont_FUNC,
	FMGetFontFromATSFontRef_FUNC,
	FMGetFontFromFontFamilyInstance_FUNC,
	FPIsFontPanelVisible_FUNC,
	FPShowHideFontPanel_FUNC,
	FSGetCatalogInfo_FUNC,
	FSpGetFInfo_FUNC,
	FSpMakeFSRef_FUNC,
	FindSpecificEventInQueue_FUNC,
	FindWindow_FUNC,
	Fix2Long_FUNC,
	Fix2X_FUNC,
	FixTSMDocument_FUNC,
	FrontWindow_FUNC,
	Gestalt_FUNC,
	GetApplicationEventTarget_FUNC,
	GetAvailableWindowAttributes_FUNC,
	GetAvailableWindowPositioningBounds_FUNC,
	GetBestControlRect_FUNC,
	GetCFRunLoopFromEventLoop_FUNC,
	GetCaretTime_FUNC,
	GetClip_FUNC,
	GetControl32BitMaximum_FUNC,
	GetControl32BitMinimum_FUNC,
	GetControl32BitValue_FUNC,
	GetControlAction_FUNC,
	GetControlBounds_FUNC,
	GetControlData__ISIILorg_eclipse_swt_internal_carbon_ControlEditTextSelectionRec_2_3I_FUNC,
	GetControlData__ISIILorg_eclipse_swt_internal_carbon_ControlFontStyleRec_2_3I_FUNC,
	GetControlData__ISIILorg_eclipse_swt_internal_carbon_LongDateRec_2_3I_FUNC,
	GetControlData__ISIILorg_eclipse_swt_internal_carbon_Rect_2_3I_FUNC,
	GetControlData__ISII_3B_3I_FUNC,
	GetControlData__ISII_3I_3I_FUNC,
	GetControlData__ISII_3S_3I_FUNC,
	GetControlEventTarget_FUNC,
	GetControlFeatures_FUNC,
	GetControlKind_FUNC,
	GetControlOwner_FUNC,
	GetControlProperty_FUNC,
	GetControlReference_FUNC,
	GetControlRegion_FUNC,
	GetControlValue_FUNC,
	GetControlViewSize_FUNC,
	GetCurrentEventButtonState_FUNC,
	GetCurrentEventKeyModifiers_FUNC,
	GetCurrentEventLoop_FUNC,
	GetCurrentEventQueue_FUNC,
	GetCurrentProcess_FUNC,
	GetCurrentScrap_FUNC,
	GetDataBrowserCallbacks_FUNC,
	GetDataBrowserHasScrollBars_FUNC,
	GetDataBrowserItemCount_FUNC,
	GetDataBrowserItemDataButtonValue_FUNC,
	GetDataBrowserItemPartBounds_FUNC,
	GetDataBrowserItemState_FUNC,
	GetDataBrowserItems_FUNC,
	GetDataBrowserListViewDisclosureColumn_FUNC,
	GetDataBrowserListViewHeaderBtnHeight_FUNC,
	GetDataBrowserListViewHeaderDesc_FUNC,
	GetDataBrowserPropertyFlags_FUNC,
	GetDataBrowserScrollBarInset_FUNC,
	GetDataBrowserScrollPosition_FUNC,
	GetDataBrowserSelectionAnchor_FUNC,
	GetDataBrowserSelectionFlags_FUNC,
	GetDataBrowserSortProperty_FUNC,
	GetDataBrowserTableViewColumnPosition_FUNC,
	GetDataBrowserTableViewItemID_FUNC,
	GetDataBrowserTableViewItemRow_FUNC,
	GetDataBrowserTableViewNamedColumnWidth_FUNC,
	GetDataBrowserTableViewRowHeight_FUNC,
	GetDblTime_FUNC,
	GetDeviceList_FUNC,
	GetDragAllowableActions_FUNC,
	GetDragDropAction_FUNC,
	GetDragItemReferenceNumber_FUNC,
	GetDragModifiers_FUNC,
	GetDragMouse_FUNC,
	GetEventClass_FUNC,
	GetEventDispatcherTarget_FUNC,
	GetEventKind_FUNC,
	GetEventParameter__III_3II_3II_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_CGPoint_2_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_CGRect_2_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_HICommand_2_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_Point_2_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_RGBColor_2_FUNC,
	GetEventParameter__III_3II_3ILorg_eclipse_swt_internal_carbon_Rect_2_FUNC,
	GetEventParameter__III_3II_3I_3B_FUNC,
	GetEventParameter__III_3II_3I_3C_FUNC,
	GetEventParameter__III_3II_3I_3I_FUNC,
	GetEventParameter__III_3II_3I_3S_FUNC,
	GetEventParameter__III_3II_3I_3Z_FUNC,
	GetEventTime_FUNC,
	GetFlavorData_FUNC,
	GetFlavorDataSize_FUNC,
	GetFlavorType_FUNC,
	GetFrontProcess_FUNC,
	GetGWorld_FUNC,
	GetGlobalMouse_FUNC,
	GetHandleSize_FUNC,
	GetIconFamilyData_FUNC,
	GetIconRef_FUNC,
	GetIconRefFromFileInfo_FUNC,
	GetIconRefFromIconFamilyPtr_FUNC,
	GetIndMenuItemWithCommandID_FUNC,
	GetIndexedSubControl_FUNC,
	GetItemMark_FUNC,
	GetKeyboardFocus_FUNC,
	GetLastUserEventTime_FUNC,
	GetMBarHeight_FUNC,
	GetMainDevice_FUNC,
	GetMainEventQueue_FUNC,
	GetMenuCommandMark_FUNC,
	GetMenuEventTarget_FUNC,
	GetMenuFont_FUNC,
	GetMenuHeight_FUNC,
	GetMenuID_FUNC,
	GetMenuItemCommandID_FUNC,
	GetMenuItemHierarchicalMenu_FUNC,
	GetMenuItemRefCon_FUNC,
	GetMenuTrackingData_FUNC,
	GetMenuWidth_FUNC,
	GetMouse_FUNC,
	GetNextDevice_FUNC,
	GetNextWindow_FUNC,
	GetPixDepth_FUNC,
	GetPort_FUNC,
	GetPortBitMapForCopyBits_FUNC,
	GetPortBounds_FUNC,
	GetPreviousWindow_FUNC,
	GetPtrSize_FUNC,
	GetRegionBounds_FUNC,
	GetRootControl_FUNC,
	GetScrapFlavorCount_FUNC,
	GetScrapFlavorData__II_3I_3B_FUNC,
	GetScrapFlavorData__II_3I_3C_FUNC,
	GetScrapFlavorInfoList_FUNC,
	GetScrapFlavorSize_FUNC,
	GetScriptManagerVariable_FUNC,
	GetSuperControl_FUNC,
	GetSystemUIMode_FUNC,
	GetTabContentRect_FUNC,
	GetThemeBrushAsColor_FUNC,
	GetThemeButtonContentBounds_FUNC,
	GetThemeButtonRegion_FUNC,
	GetThemeDrawingState_FUNC,
	GetThemeFont_FUNC,
	GetThemeMenuItemExtra_FUNC,
	GetThemeMetric_FUNC,
	GetThemeTextColor_FUNC,
	GetThemeTextDimensions_FUNC,
	GetUserFocusEventTarget_FUNC,
	GetUserFocusWindow_FUNC,
	GetWindowActivationScope_FUNC,
	GetWindowAlpha_FUNC,
	GetWindowBounds_FUNC,
	GetWindowClass_FUNC,
	GetWindowDefaultButton_FUNC,
	GetWindowEventTarget_FUNC,
	GetWindowFromPort_FUNC,
	GetWindowGroupOfClass_FUNC,
	GetWindowList_FUNC,
	GetWindowModality_FUNC,
	GetWindowPort_FUNC,
	GetWindowRegion_FUNC,
	GetWindowResizeLimits_FUNC,
	GetWindowStructureWidths_FUNC,
	HIComboBoxAppendTextItem_FUNC,
	HIComboBoxCopyTextItemAtIndex_FUNC,
	HIComboBoxCreate_FUNC,
	HIComboBoxGetItemCount_FUNC,
	HIComboBoxInsertTextItemAtIndex_FUNC,
	HIComboBoxIsListVisible_FUNC,
	HIComboBoxRemoveItemAtIndex_FUNC,
	HIComboBoxSetListVisible_FUNC,
	HICopyAccessibilityRoleDescription_FUNC,
	HICreateTransformedCGImage_FUNC,
	HIObjectCopyClassID_FUNC,
	HIObjectCreate_FUNC,
	HIObjectRegisterSubclass_FUNC,
	HIObjectSetAccessibilityIgnored_FUNC,
	HIObjectSetAuxiliaryAccessibilityAttribute_FUNC,
	HIScrollViewCreate_FUNC,
	HIScrollViewSetScrollBarAutoHide_FUNC,
	HISearchFieldChangeAttributes_FUNC,
	HISearchFieldCopyDescriptiveText_FUNC,
	HISearchFieldCreate_FUNC,
	HISearchFieldGetAttributes_FUNC,
	HISearchFieldSetDescriptiveText_FUNC,
	HIShapeCreateWithQDRgn_FUNC,
	HIShapeReplacePathInCGContext_FUNC,
	HITextViewCreate_FUNC,
	HITextViewGetTXNObject_FUNC,
	HITextViewSetBackgroundColor_FUNC,
	HIThemeDrawBackground_FUNC,
	HIThemeDrawButton_FUNC,
	HIThemeDrawFocusRect_FUNC,
	HIThemeDrawFrame_FUNC,
	HIThemeDrawGenericWell_FUNC,
	HIThemeDrawGroupBox_FUNC,
	HIThemeDrawGrowBox_FUNC,
	HIThemeDrawPopupArrow_FUNC,
	HIThemeDrawSeparator_FUNC,
	HIThemeDrawTab_FUNC,
	HIThemeDrawTabPane_FUNC,
	HIThemeDrawTextBox_FUNC,
	HIThemeDrawTrack_FUNC,
	HIThemeGetButtonBackgroundBounds_FUNC,
	HIThemeGetButtonContentBounds_FUNC,
	HIThemeGetScrollBarTrackRect_FUNC,
	HIThemeGetTextDimensions_FUNC,
	HIThemeGetTrackBounds_FUNC,
	HIThemeGetTrackLiveValue_FUNC,
	HIThemeGetTrackPartBounds_FUNC,
	HIThemeGetTrackThumbPositionFromBounds_FUNC,
	HIThemeGetTrackThumbPositionFromOffset_FUNC,
	HIThemeHitTestScrollBarArrows_FUNC,
	HIThemeHitTestTrack_FUNC,
	HIThemeSetFill_FUNC,
	HIThemeSetTextFill_FUNC,
	HIViewAddSubview_FUNC,
	HIViewChangeAttributes_FUNC,
	HIViewChangeFeatures_FUNC,
	HIViewClick_FUNC,
	HIViewConvertPoint_FUNC,
	HIViewConvertRect_FUNC,
	HIViewConvertRegion_FUNC,
	HIViewCreateOffscreenImage_FUNC,
	HIViewDrawCGImage_FUNC,
	HIViewFindByID_FUNC,
	HIViewGetBounds_FUNC,
	HIViewGetFeatures_FUNC,
	HIViewGetFirstSubview_FUNC,
	HIViewGetFrame_FUNC,
	HIViewGetLastSubview_FUNC,
	HIViewGetLayoutInfo_FUNC,
	HIViewGetNeedsDisplay_FUNC,
	HIViewGetNextView_FUNC,
	HIViewGetRoot_FUNC,
	HIViewGetSizeConstraints_FUNC,
	HIViewGetSubviewHit_FUNC,
	HIViewGetSuperview_FUNC,
	HIViewGetViewForMouseEvent_FUNC,
	HIViewIsDrawingEnabled_FUNC,
	HIViewIsVisible_FUNC,
	HIViewRegionChanged_FUNC,
	HIViewRemoveFromSuperview_FUNC,
	HIViewRender_FUNC,
	HIViewScrollRect_FUNC,
	HIViewSetBoundsOrigin_FUNC,
	HIViewSetDrawingEnabled_FUNC,
	HIViewSetFrame_FUNC,
	HIViewSetLayoutInfo_FUNC,
	HIViewSetNeedsDisplay_FUNC,
	HIViewSetNeedsDisplayInRegion_FUNC,
	HIViewSetVisible_FUNC,
	HIViewSetZOrder_FUNC,
	HIViewSimulateClick_FUNC,
	HIWindowFlush_FUNC,
	HIWindowIsDocumentModalTarget_FUNC,
	HLock_FUNC,
	HMDisplayTag_FUNC,
	HMGetTagDelay_FUNC,
	HMHideTag_FUNC,
	HMInstallControlContentCallback_FUNC,
	HMSetTagDelay_FUNC,
	HUnlock_FUNC,
	HandleControlClick_FUNC,
	HandleControlSetCursor_FUNC,
	HiWord_FUNC,
	HideWindow_FUNC,
	HiliteMenu_FUNC,
	IconRefToIconFamily_FUNC,
	InitContextualMenus_FUNC,
	InitCursor_FUNC,
	InitDataBrowserCallbacks_FUNC,
	InitDataBrowserCustomCallbacks_FUNC,
	InsertMenu_FUNC,
	InsertMenuItemTextWithCFString_FUNC,
	InstallEventHandler_FUNC,
	InstallEventLoopIdleTimer_FUNC,
	InstallEventLoopTimer_FUNC,
	InstallReceiveHandler_FUNC,
	InstallTrackingHandler_FUNC,
	InvalWindowRect_FUNC,
	InvalWindowRgn_FUNC,
	InvertRect_FUNC,
	IsControlActive_FUNC,
	IsControlEnabled_FUNC,
	IsControlVisible_FUNC,
	IsDataBrowserItemSelected_FUNC,
	IsEventInQueue_FUNC,
	IsMenuCommandEnabled_FUNC,
	IsMenuItemEnabled_FUNC,
	IsMenuKeyEvent_FUNC,
	IsValidControlHandle_FUNC,
	IsValidMenu_FUNC,
	IsValidWindowPtr_FUNC,
	IsWindowActive_FUNC,
	IsWindowCollapsed_FUNC,
	IsWindowModified_FUNC,
	IsWindowVisible_FUNC,
	JNIGetObject_FUNC,
	KLGetCurrentKeyboardLayout_FUNC,
	KLGetKeyboardLayoutProperty_FUNC,
	KeyTranslate_FUNC,
	KillPicture_FUNC,
	LMGetKbdType_FUNC,
	LSCopyAllRoleHandlersForContentType_FUNC,
	LSCopyDisplayNameForRef_FUNC,
	LSFindApplicationForInfo_FUNC,
	LSGetApplicationForInfo_FUNC,
	LSOpenApplication_FUNC,
	LSOpenCFURLRef_FUNC,
	LSOpenURLsWithRole_FUNC,
	LineTo_FUNC,
	LoWord_FUNC,
	Long2Fix_FUNC,
	MenuSelect_FUNC,
	MoveControl_FUNC,
	MoveTo_FUNC,
	MoveWindow_FUNC,
	NavCreateChooseFolderDialog_FUNC,
	NavCreateGetFileDialog_FUNC,
	NavCreatePutFileDialog_FUNC,
	NavCustomControl__IILorg_eclipse_swt_internal_carbon_AEDesc_2_FUNC,
	NavCustomControl__IILorg_eclipse_swt_internal_carbon_NavMenuItemSpec_2_FUNC,
	NavDialogDispose_FUNC,
	NavDialogGetReply_FUNC,
	NavDialogGetSaveFileName_FUNC,
	NavDialogGetUserAction_FUNC,
	NavDialogRun_FUNC,
	NavDialogSetFilterTypeIdentifiers_FUNC,
	NavDialogSetSaveFileName_FUNC,
	NavDisposeReply_FUNC,
	NavGetDefaultDialogCreationOptions_FUNC,
	NewControl_FUNC,
	NewDrag_FUNC,
	NewGWorldFromPtr_FUNC,
	NewGlobalRef_FUNC,
	NewHandle_FUNC,
	NewHandleClear_FUNC,
	NewPtr_FUNC,
	NewPtrClear_FUNC,
	NewRgn_FUNC,
	NewTSMDocument_FUNC,
	OffsetRect_FUNC,
	OffsetRgn_FUNC,
	OpenDataBrowserContainer_FUNC,
	OpenPicture_FUNC,
	OpenRgn_FUNC,
	PMCreatePageFormat_FUNC,
	PMCreatePrintSettings_FUNC,
	PMCreateSession_FUNC,
	PMFlattenPageFormat_FUNC,
	PMFlattenPrintSettings_FUNC,
	PMGetAdjustedPageRect_FUNC,
	PMGetAdjustedPaperRect_FUNC,
	PMGetCollate_FUNC,
	PMGetCopies_FUNC,
	PMGetFirstPage_FUNC,
	PMGetJobNameCFString_FUNC,
	PMGetLastPage_FUNC,
	PMGetOrientation_FUNC,
	PMGetPageRange_FUNC,
	PMGetResolution_FUNC,
	PMPrinterGetOutputResolution_FUNC,
	PMRelease_FUNC,
	PMSessionBeginDocumentNoDialog_FUNC,
	PMSessionBeginPageNoDialog_FUNC,
	PMSessionCopyDestinationLocation_FUNC,
	PMSessionCreatePrinterList_FUNC,
	PMSessionDefaultPageFormat_FUNC,
	PMSessionDefaultPrintSettings_FUNC,
	PMSessionEndDocumentNoDialog_FUNC,
	PMSessionEndPageNoDialog_FUNC,
	PMSessionError_FUNC,
	PMSessionGetCurrentPrinter_FUNC,
	PMSessionGetDestinationType_FUNC,
	PMSessionGetGraphicsContext_FUNC,
	PMSessionPageSetupDialog_FUNC,
	PMSessionPrintDialog_FUNC,
	PMSessionSetCurrentPrinter_FUNC,
	PMSessionSetDestination_FUNC,
	PMSessionSetDocumentFormatGeneration_FUNC,
	PMSessionSetError_FUNC,
	PMSessionUseSheets_FUNC,
	PMSessionValidatePageFormat_FUNC,
	PMSessionValidatePrintSettings_FUNC,
	PMSetCollate_FUNC,
	PMSetCopies_FUNC,
	PMSetFirstPage_FUNC,
	PMSetJobNameCFString_FUNC,
	PMSetLastPage_FUNC,
	PMSetOrientation_FUNC,
	PMSetPageRange_FUNC,
	PMShowPrintDialogWithOptions_FUNC,
	PMUnflattenPageFormat_FUNC,
	PMUnflattenPrintSettings_FUNC,
	PickColor_FUNC,
	PopUpMenuSelect_FUNC,
	PostEvent_FUNC,
	PostEventToQueue_FUNC,
	PtInRect_FUNC,
	PtInRgn_FUNC,
	PutScrapFlavor__IIII_3B_FUNC,
	PutScrapFlavor__IIII_3C_FUNC,
	QDBeginCGContext_FUNC,
	QDEndCGContext_FUNC,
	QDFlushPortBuffer_FUNC,
	QDPictCreateWithProvider_FUNC,
	QDPictDrawToCGContext_FUNC,
	QDPictGetBounds_FUNC,
	QDPictRelease_FUNC,
	QDRegionToRects_FUNC,
	RGBBackColor_FUNC,
	RGBForeColor_FUNC,
	ReadIconFile_FUNC,
	ReceiveNextEvent_FUNC,
	RectInRgn_FUNC,
	RectRgn_FUNC,
	RegisterAppearanceClient_FUNC,
	ReleaseEvent_FUNC,
	ReleaseIconRef_FUNC,
	ReleaseMenu_FUNC,
	ReleaseWindow_FUNC,
	ReleaseWindowGroup_FUNC,
	RemoveControlProperty_FUNC,
	RemoveDataBrowserItems_FUNC,
	RemoveDataBrowserTableViewColumn_FUNC,
	RemoveEventFromQueue_FUNC,
	RemoveEventHandler_FUNC,
	RemoveEventLoopTimer_FUNC,
	RemoveReceiveHandler_FUNC,
	RemoveTrackingHandler_FUNC,
	RepositionWindow_FUNC,
	ReshapeCustomWindow_FUNC,
	RestoreApplicationDockTileImage_FUNC,
	RetainEvent_FUNC,
	RetainMenu_FUNC,
	RetainWindow_FUNC,
	RevealDataBrowserItem_FUNC,
	RunStandardAlert_FUNC,
	SameProcess_FUNC,
	ScrollRect_FUNC,
	SectRect_FUNC,
	SectRgn_FUNC,
	SelectWindow_FUNC,
	SendBehind_FUNC,
	SendEventToEventTarget_FUNC,
	SendEventToEventTargetWithOptions_FUNC,
	SetApplicationDockTileImage_FUNC,
	SetAutomaticControlDragTrackingEnabledForWindow_FUNC,
	SetBevelButtonContentInfo_FUNC,
	SetClip_FUNC,
	SetControl32BitMaximum_FUNC,
	SetControl32BitMinimum_FUNC,
	SetControl32BitValue_FUNC,
	SetControlAction_FUNC,
	SetControlBounds_FUNC,
	SetControlColorProc_FUNC,
	SetControlData__IIIII_FUNC,
	SetControlData__IIIILorg_eclipse_swt_internal_carbon_ControlButtonContentInfo_2_FUNC,
	SetControlData__IIIILorg_eclipse_swt_internal_carbon_ControlEditTextSelectionRec_2_FUNC,
	SetControlData__IIIILorg_eclipse_swt_internal_carbon_ControlTabInfoRecV1_2_FUNC,
	SetControlData__IIIILorg_eclipse_swt_internal_carbon_LongDateRec_2_FUNC,
	SetControlData__IIIILorg_eclipse_swt_internal_carbon_Rect_2_FUNC,
	SetControlData__IIII_3B_FUNC,
	SetControlData__IIII_3I_FUNC,
	SetControlData__IIII_3S_FUNC,
	SetControlFontStyle_FUNC,
	SetControlPopupMenuHandle_FUNC,
	SetControlProperty_FUNC,
	SetControlReference_FUNC,
	SetControlTitleWithCFString_FUNC,
	SetControlViewSize_FUNC,
	SetControlVisibility_FUNC,
	SetCursor_FUNC,
	SetDataBrowserCallbacks_FUNC,
	SetDataBrowserCustomCallbacks_FUNC,
	SetDataBrowserHasScrollBars_FUNC,
	SetDataBrowserItemDataBooleanValue_FUNC,
	SetDataBrowserItemDataButtonValue_FUNC,
	SetDataBrowserItemDataIcon_FUNC,
	SetDataBrowserItemDataItemID_FUNC,
	SetDataBrowserItemDataText_FUNC,
	SetDataBrowserListViewDisclosureColumn_FUNC,
	SetDataBrowserListViewHeaderBtnHeight_FUNC,
	SetDataBrowserListViewHeaderDesc_FUNC,
	SetDataBrowserPropertyFlags_FUNC,
	SetDataBrowserScrollPosition_FUNC,
	SetDataBrowserSelectedItems_FUNC,
	SetDataBrowserSelectionFlags_FUNC,
	SetDataBrowserSortOrder_FUNC,
	SetDataBrowserSortProperty_FUNC,
	SetDataBrowserTableViewColumnPosition_FUNC,
	SetDataBrowserTableViewHiliteStyle_FUNC,
	SetDataBrowserTableViewItemRow_FUNC,
	SetDataBrowserTableViewNamedColumnWidth_FUNC,
	SetDataBrowserTableViewRowHeight_FUNC,
	SetDataBrowserTarget_FUNC,
	SetDragAllowableActions_FUNC,
	SetDragDropAction_FUNC,
	SetDragImageWithCGImage_FUNC,
	SetDragInputProc_FUNC,
	SetDragItemFlavorData_FUNC,
	SetDragSendProc_FUNC,
	SetEventLoopTimerNextFireTime_FUNC,
	SetEventParameter__IIIILorg_eclipse_swt_internal_carbon_CGPoint_2_FUNC,
	SetEventParameter__IIIILorg_eclipse_swt_internal_carbon_HICommand_2_FUNC,
	SetEventParameter__IIIILorg_eclipse_swt_internal_carbon_Point_2_FUNC,
	SetEventParameter__IIII_3C_FUNC,
	SetEventParameter__IIII_3I_FUNC,
	SetEventParameter__IIII_3S_FUNC,
	SetEventParameter__IIII_3Z_FUNC,
	SetFontInfoForSelection_FUNC,
	SetFrontProcess_FUNC,
	SetFrontProcessWithOptions_FUNC,
	SetGWorld_FUNC,
	SetHandleSize_FUNC,
	SetIconFamilyData_FUNC,
	SetItemMark_FUNC,
	SetKeyboardFocus_FUNC,
	SetMenuCommandMark_FUNC,
	SetMenuFont_FUNC,
	SetMenuItemCommandKey_FUNC,
	SetMenuItemHierarchicalMenu_FUNC,
	SetMenuItemIconHandle_FUNC,
	SetMenuItemKeyGlyph_FUNC,
	SetMenuItemModifiers_FUNC,
	SetMenuItemRefCon_FUNC,
	SetMenuItemTextWithCFString_FUNC,
	SetMenuTitleWithCFString_FUNC,
	SetPort_FUNC,
	SetPt_FUNC,
	SetRect_FUNC,
	SetRectRgn_FUNC,
	SetRootMenu_FUNC,
	SetSystemUIMode_FUNC,
	SetThemeBackground_FUNC,
	SetThemeCursor_FUNC,
	SetThemeDrawingState_FUNC,
	SetThemeTextColor_FUNC,
	SetThemeWindowBackground_FUNC,
	SetUpControlBackground_FUNC,
	SetUserFocusWindow_FUNC,
	SetWindowActivationScope_FUNC,
	SetWindowAlpha_FUNC,
	SetWindowBounds_FUNC,
	SetWindowDefaultButton_FUNC,
	SetWindowGroup_FUNC,
	SetWindowGroupOwner_FUNC,
	SetWindowGroupParent_FUNC,
	SetWindowModality_FUNC,
	SetWindowModified_FUNC,
	SetWindowResizeLimits_FUNC,
	SetWindowTitleWithCFString_FUNC,
	ShowWindow_FUNC,
	SizeControl_FUNC,
	SizeWindow_FUNC,
	StillDown_FUNC,
	SysBeep_FUNC,
	TXNCopy_FUNC,
	TXNCut_FUNC,
	TXNDataSize_FUNC,
	TXNDeleteObject_FUNC,
	TXNEchoMode_FUNC,
	TXNGetData_FUNC,
	TXNGetHIRect_FUNC,
	TXNGetLineCount_FUNC,
	TXNGetLineMetrics_FUNC,
	TXNGetSelection_FUNC,
	TXNGetTXNObjectControls_FUNC,
	TXNGetViewRect_FUNC,
	TXNHIPointToOffset_FUNC,
	TXNInitTextension_FUNC,
	TXNOffsetToHIPoint_FUNC,
	TXNPaste_FUNC,
	TXNSelectAll_FUNC,
	TXNSetBackground_FUNC,
	TXNSetData_FUNC,
	TXNSetFrameBounds_FUNC,
	TXNSetSelection_FUNC,
	TXNSetTXNObjectControls_FUNC,
	TXNSetTypeAttributes_FUNC,
	TXNShowSelection_FUNC,
	TextFace_FUNC,
	TextFont_FUNC,
	TextSize_FUNC,
	TrackDrag_FUNC,
	TrackMouseLocationWithOptions_FUNC,
	UCKeyTranslate_FUNC,
	UTTypeCreateAllIdentifiersForTag_FUNC,
	UTTypeCreatePreferredIdentifierForTag_FUNC,
	UnionRect_FUNC,
	UnionRgn_FUNC,
	UpdateDataBrowserItems_FUNC,
	UpgradeScriptInfoToTextEncoding_FUNC,
	UseInputWindow_FUNC,
	WaitMouseMoved_FUNC,
	X2Fix_FUNC,
	ZoomWindowIdeal_FUNC,
	_1_1BIG_1ENDIAN_1_1_FUNC,
	getpid_FUNC,
	kCFNumberFormatterDecimalSeparator_FUNC,
	kCFRunLoopCommonModes_FUNC,
	kCFRunLoopDefaultMode_FUNC,
	kFontPanelAttributeSizesKey_FUNC,
	kFontPanelAttributeTagsKey_FUNC,
	kFontPanelAttributeValuesKey_FUNC,
	kFontPanelAttributesKey_FUNC,
	kHIViewWindowContentID_FUNC,
	kPMDocumentFormatPDF_FUNC,
	kPMGraphicsContextCoreGraphics_FUNC,
	kUTTagClassFilenameExtension_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_ATSUTab_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_BitMap_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_Cursor_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_HMHelpContentRec_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_PixMap_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_RGBColor_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_carbon_Rect_2I_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_ATSLayoutRecord_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_ATSTrapezoid_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_CGPathElement_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_GDevice_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_HMHelpContentRec_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_NavCBRec_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_NavFileOrFolderInfo_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_NavMenuItemSpec_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_PixMap_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_Point_2_3II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_RGBColor_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_Rect_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_carbon_TextRange_2II_FUNC,
	memmove___3C_3BI_FUNC,
	memmove___3ILorg_eclipse_swt_internal_carbon_TXNTab_2I_FUNC,
} OS_FUNCS;
