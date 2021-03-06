/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {
    NSMutableArray *_laneDirections;
    NSMutableArray *_laneDividers;
    NSMutableArray *_laneTypes;
    unsigned int _roadLaneCount;
    struct { 
        unsigned int roadLaneCount : 1; 
    } _has;
}

@property bool hasRoadLaneCount;
@property unsigned int roadLaneCount;
@property(retain) NSMutableArray * laneDividers;
@property(retain) NSMutableArray * laneDirections;
@property(retain) NSMutableArray * laneTypes;


- (id)laneTypes;
- (id)laneDirections;
- (id)laneDividers;
- (unsigned int)roadLaneCount;
- (bool)hasRoadLaneCount;
- (void)setHasRoadLaneCount:(bool)arg1;
- (void)setRoadLaneCount:(unsigned int)arg1;
- (id)laneTypeAtIndex:(unsigned long long)arg1;
- (void)clearLaneTypes;
- (unsigned long long)laneTypesCount;
- (id)laneDirectionAtIndex:(unsigned long long)arg1;
- (void)clearLaneDirections;
- (unsigned long long)laneDirectionsCount;
- (id)laneDividerAtIndex:(unsigned long long)arg1;
- (void)clearLaneDividers;
- (unsigned long long)laneDividersCount;
- (void)addLaneType:(id)arg1;
- (void)addLaneDirection:(id)arg1;
- (void)addLaneDivider:(id)arg1;
- (void)setLaneTypes:(id)arg1;
- (void)setLaneDirections:(id)arg1;
- (void)setLaneDividers:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
