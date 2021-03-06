/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class _UIRemoteView, NSString, <QLPreviewContentDelegate>, <QLPreviewContentDataSource>, QLPreviewController, NSMapTable, QLPrintPageRenderer;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {
    QLPreviewController *_previewController;
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    long long _currentPreviewItemIndex;
    long long _numberOfPreviewItems;
    NSMapTable *_previewItemsForProxys;
    NSMapTable *_proxysForPreviewItems;
    QLPrintPageRenderer *_printPageRenderer;
    _UIRemoteView *_fullScreenView;
    bool_statusBarWasHidden;
    bool_isHostingFullScreenWindow;
}

@property QLPreviewController * previewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property int previewMode;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)_previewItemFromProxy:(id)arg1;
- (id)_proxyForPreviewItem:(id)arg1;
- (void)setNumberOfPreviewItems:(long long)arg1;
- (void)_updateNavigationBarVerticalOffset;
- (void)_didExitFullScreen;
- (void)_willEnterFullScreenWithContext:(id)arg1;
- (void)_setAVState:(id)arg1 forPreviewItem:(id)arg2;
- (void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
- (void)_previewContentControllerReceivedTapOnURL:(id)arg1;
- (void)_previewContentControllerDidMoveToItemAtIndex:(long long)arg1;
- (void)_previewContentControllerWillMoveToItemAtIndex:(long long)arg1;
- (void)_showContentsWasTappedInPreviewContentController;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_contentWasTappedInPreviewContentController;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerGetPreviewItemAtIndex:(long long)arg1 sourceUUID:(long long)arg2 handler:(id)arg3;
- (id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(bool*)arg3;
- (void)printPageRenderer:(id)arg1 prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)numberOfPagesInPrintPageRenderer:(id)arg1;
- (void)scrubToValue:(double)arg1;
- (id)printPageHelper;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (void)togglePlayState;
- (void)forceResignFirstResponder;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willChangeContentFrame;
- (void)configureWithParameters:(id)arg1;
- (void)setOverlayHidden:(bool)arg1 duration:(double)arg2;
- (void)becomeForeground;
- (void)enterBackground;
- (void)stopLoadingCurrentPreviewItem;
- (void)setPreviewController:(id)arg1;
- (long long)numberOfPreviewItems;
- (void)refreshCurrentPreviewItem;
- (void)checkCurrentPreviewItem;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (long long)currentPreviewItemIndex;
- (void)setTransitioning:(bool)arg1 synchronizedWithBlock:(id)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)printPageRenderer;
- (void)setBlockRemoteImages:(bool)arg1;
- (id)previewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;

@end
