/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEORPUserCredentials, NSData, GEOLocation, NSMutableArray;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
}

@property(retain) NSMutableArray * requestElements;
@property(readonly) bool hasHwMachine;
@property(retain) NSString * hwMachine;
@property(readonly) bool hasOsRelease;
@property(retain) NSString * osRelease;
@property(readonly) bool hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) bool hasInputLanguage;
@property(retain) NSString * inputLanguage;
@property(readonly) bool hasUserCredentials;
@property(retain) GEORPUserCredentials * userCredentials;
@property(readonly) bool hasDevicePushToken;
@property(retain) NSData * devicePushToken;
@property(readonly) bool hasUserEmail;
@property(retain) NSString * userEmail;
@property(readonly) bool hasUserLocation;
@property(retain) GEOLocation * userLocation;


- (id)userLocation;
- (bool)hasUserLocation;
- (id)osRelease;
- (bool)hasOsRelease;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (void)addRequestElement:(id)arg1;
- (void)setOsRelease:(id)arg1;
- (id)userEmail;
- (id)devicePushToken;
- (bool)hasUserEmail;
- (bool)hasDevicePushToken;
- (void)setUserEmail:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (id)userCredentials;
- (bool)hasUserCredentials;
- (void)setUserCredentials:(id)arg1;
- (id)hwMachine;
- (bool)hasHwMachine;
- (void)setHwMachine:(id)arg1;
- (id)inputLanguage;
- (bool)hasInputLanguage;
- (void)setInputLanguage:(id)arg1;
- (bool)hasCountryCode;
- (id)requestElements;
- (void)clearRequestElements;
- (unsigned long long)requestElementsCount;
- (void)setRequestElements:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
