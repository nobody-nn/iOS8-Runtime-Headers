/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImage, UILabel, SKUILockupMetadataView, SKUIEmbeddedMediaView;

@interface SKUILockupItemCellLayout : SKUIItemCellLayout  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    } _imageBoundingSize;
    long long _itemOfferStyle;
    UILabel *_itemOfferTextLabel;
    long long _layoutStyle;
    long long _lockupSize;
    SKUILockupMetadataView *_metadataView;
    bool_playsInlineVideo;
    long long _verticalAlignment;
    SKUIEmbeddedMediaView *_videoThumbnailView;
    struct CGSize { 
        double width; 
        double height; 
    } _videoThumbnailSize;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property struct CGSize { double x1; double x2; } imageBoundingSize;
@property long long itemOfferStyle;
@property long long layoutStyle;
@property long long lockupSize;
@property long long verticalAlignment;
@property unsigned long long visibleFields;
@property(copy) NSString * artistName;
@property(copy) NSString * categoryString;
@property(copy) NSString * editorialBadgeString;
@property(copy) NSString * itemCountString;
@property(copy) NSString * releaseDateString;
@property(copy) NSString * title;
@property long long numberOfUserRatings;
@property float userRating;
@property(retain) UIImage * videoThumbnailImage;
@property struct CGSize { double x1; double x2; } videoThumbnailSize;
@property bool playsInlineVideo;

+ (double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2;
+ (struct CGSize { double x1; double x2; })videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2;
+ (double)heightForLockupStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4;

- (long long)numberOfUserRatings;
- (struct CGSize { double x1; double x2; })videoThumbnailSize;
- (bool)playsInlineVideo;
- (long long)itemOfferStyle;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (void)setVideoThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoThumbnailImage:(id)arg1;
- (void)setPlaysInlineVideo:(bool)arg1;
- (void)setItemOfferStyle:(long long)arg1;
- (void)playInlineVideoWithURL:(id)arg1;
- (void)endVideoPlaybackAnimated:(bool)arg1;
- (id)_itemOfferTextLabel;
- (bool)_isItemOfferHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutIconImageView;
- (void)_layoutVertical;
- (void)_layoutHorizontal;
- (void)_beginVideoPlaybackAction:(id)arg1;
- (id)videoThumbnailImage;
- (void)_initSKUILockupItemCellLayout;
- (long long)lockupSize;
- (void)layoutForItemOfferChange;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)setLockupSize:(long long)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutStyle:(long long)arg1;
- (long long)layoutStyle;
- (id)initWithParentView:(id)arg1;
- (unsigned long long)visibleFields;
- (void)setVisibleFields:(unsigned long long)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setItemCountString:(id)arg1;
- (void)setCategoryString:(id)arg1;
- (void)setEditorialBadgeString:(id)arg1;
- (id)itemCountString;
- (id)editorialBadgeString;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)categoryString;
- (void)setClientContext:(id)arg1;
- (void)setIconImage:(id)arg1;
- (id)releaseDateString;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (float)userRating;
- (void)setUserRating:(float)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)verticalAlignment;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
