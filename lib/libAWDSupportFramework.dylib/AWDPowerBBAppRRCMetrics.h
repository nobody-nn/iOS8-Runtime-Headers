/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSMutableArray *_appConnStats;
    unsigned int _numRRCConnections;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numRRCConnections : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(retain) NSMutableArray * appConnStats;
@property bool hasNumRRCConnections;
@property unsigned int numRRCConnections;


- (unsigned int)numRRCConnections;
- (id)appConnStats;
- (bool)hasNumRRCConnections;
- (void)setHasNumRRCConnections:(bool)arg1;
- (void)setNumRRCConnections:(unsigned int)arg1;
- (id)appConnStatsAtIndex:(unsigned long long)arg1;
- (void)clearAppConnStats;
- (unsigned long long)appConnStatsCount;
- (void)addAppConnStats:(id)arg1;
- (void)setAppConnStats:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
