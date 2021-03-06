/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class RadioStation, NSString;

@interface MPRadioStation : NSObject <NSCopying> {
    RadioStation *_station;
}

@property(readonly) long long uniqueIdentifier;
@property(readonly) NSString * localizedName;
@property(readonly) NSString * localizedDescription;
@property(getter=_station,readonly) RadioStation * _station;

+ (bool)supportsSecureCoding;

- (id)_station;
- (id)initWithStation:(id)arg1;
- (id)localizedName;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (long long)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
