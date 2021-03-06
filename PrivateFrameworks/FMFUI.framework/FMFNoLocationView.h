/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class UIView, UIImageView, UIImage, NSLayoutConstraint, UILabel, <FMFNoLocationViewDelegate>;

@interface FMFNoLocationView : UIView  {
    bool_blockLabelUpdates;
    <FMFNoLocationViewDelegate> *_delegate;
    NSLayoutConstraint *_topInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    UIImage *_offlineProfileImage;
    UIImageView *_offlineProfileImageView;
    UIImageView *_personImageView;
    UILabel *_detailsLabel;
    UIView *_blur;
    UIView *_insetView;
}

@property <FMFNoLocationViewDelegate> * delegate;
@property bool blockLabelUpdates;
@property(retain) NSLayoutConstraint * topInsetConstraint;
@property(retain) NSLayoutConstraint * bottomInsetConstraint;
@property(retain) UIImage * offlineProfileImage;
@property(retain) UIImageView * offlineProfileImageView;
@property(retain) UIImageView * personImageView;
@property(retain) UILabel * detailsLabel;
@property(retain) UIView * blur;
@property(retain) UIView * insetView;


- (id)insetView;
- (id)offlineProfileImageView;
- (id)bottomInsetConstraint;
- (id)topInsetConstraint;
- (void)setBlockLabelUpdates:(bool)arg1;
- (void)setOfflineProfileImage:(id)arg1;
- (id)detailsLabel;
- (bool)blockLabelUpdates;
- (void)updateConstriantsForInsets;
- (void)setBottomInsetConstraint:(id)arg1;
- (void)setTopInsetConstraint:(id)arg1;
- (void)updateLabelNotification:(id)arg1;
- (void)updatePersonImageViewImage;
- (void)updateLabel;
- (void)addLayoutConstraints;
- (void)setInsetView:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setPersonImageView:(id)arg1;
- (void)setOfflineProfileImageView:(id)arg1;
- (id)offlineProfileImage;
- (void)setBlur:(id)arg1;
- (id)personImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)blur;
- (void)setAlpha:(double)arg1;

@end
