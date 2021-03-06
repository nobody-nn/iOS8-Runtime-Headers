/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPAVItem, NSString, MPViewController, MPTransitionController, UIView, MPAVController;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {
    id _delegate;
    long long _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    MPViewController *_pushedViewController;
    MPTransitionController *_pushedTransitionController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _popViewControllerHandler;

    unsigned int _appearing : 1;
    unsigned int _observesApplicationSuspendResumeEventsOnly : 1;
    unsigned int _showOverlayWhileAppearingDisabled : 1;
    bool_registeredForPlayerNotifications;
    long long _playerLockedCount;
    bool_idleTimerDisabled;
}

@property bool registeredForPlayerNotifications;
@property(copy) id popViewControllerHandler;
@property bool observesApplicationSuspendResumeEventsOnly;
@property(getter=idleTimerDisabled,setter=setIdleTimerDisabled:) bool idleTimerDisabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(retain) MPAVItem * item;
@property long long orientation;
@property(retain) MPAVController * player;
@property(retain,readonly) UIView * view;


- (bool)registeredForPlayerNotifications;
- (void)setAppearing:(bool)arg1;
- (bool)observesApplicationSuspendResumeEventsOnly;
- (bool)isAppearing;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)incrementAggregateStatisticsDisplayCount;
- (void)setRegisteredForPlayerNotifications:(bool)arg1;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)_popTransitionEnded:(id)arg1;
- (void)_pushTransitionEnded:(id)arg1;
- (void)applicationResumed;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)startTicking;
- (void)stopTicking;
- (void)setPopViewControllerHandler:(id)arg1;
- (void)setObservesApplicationSuspendResumeEventsOnly:(bool)arg1;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (id)popViewControllerHandler;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (long long)orientation;
- (void)addChildViewController:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (bool)idleTimerDisabled;
- (void)removeChildViewController:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)_canReloadView;
- (void)viewWillAppear:(bool)arg1;
- (void)setView:(id)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (id)popViewControllerAnimated:(bool)arg1;

@end
