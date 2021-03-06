/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callStatus : 1; 
        unsigned int callType : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasCallType;
@property unsigned int callType;
@property bool hasCallStatus;
@property unsigned int callStatus;


- (bool)hasCallStatus;
- (void)setHasCallStatus:(bool)arg1;
- (bool)hasCallType;
- (void)setHasCallType:(bool)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (unsigned int)callType;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)callStatus;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
