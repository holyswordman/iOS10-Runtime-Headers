/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitConfiguration : PBCodable <NSCopying> {
    unsigned int _databaseSize;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int databaseSize : 1; 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numHomes : 1; 
        unsigned int numLocationGroups : 1; 
        unsigned int numLocations : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
    } _has;
    unsigned int _numAccessories;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numHomes;
    unsigned int _numLocationGroups;
    unsigned int _numLocations;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int databaseSize;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasDatabaseSize;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) BOOL hasNumAccessoryServiceGroups;
@property (nonatomic) BOOL hasNumHomes;
@property (nonatomic) BOOL hasNumLocationGroups;
@property (nonatomic) BOOL hasNumLocations;
@property (nonatomic) BOOL hasNumScenes;
@property (nonatomic) BOOL hasNumServices;
@property (nonatomic) BOOL hasNumTriggers;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned int numAccessoryServiceGroups;
@property (nonatomic) unsigned int numHomes;
@property (nonatomic) unsigned int numLocationGroups;
@property (nonatomic) unsigned int numLocations;
@property (nonatomic) unsigned int numScenes;
@property (nonatomic) unsigned int numServices;
@property (nonatomic) unsigned int numTriggers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)databaseSize;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasDatabaseSize;
- (BOOL)hasGuid;
- (BOOL)hasNumAccessories;
- (BOOL)hasNumAccessoryServiceGroups;
- (BOOL)hasNumHomes;
- (BOOL)hasNumLocationGroups;
- (BOOL)hasNumLocations;
- (BOOL)hasNumScenes;
- (BOOL)hasNumServices;
- (BOOL)hasNumTriggers;
- (BOOL)hasNumUsers;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numHomes;
- (unsigned int)numLocationGroups;
- (unsigned int)numLocations;
- (unsigned int)numScenes;
- (unsigned int)numServices;
- (unsigned int)numTriggers;
- (unsigned int)numUsers;
- (BOOL)readFrom:(id)arg1;
- (void)setDatabaseSize:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDatabaseSize:(BOOL)arg1;
- (void)setHasNumAccessories:(BOOL)arg1;
- (void)setHasNumAccessoryServiceGroups:(BOOL)arg1;
- (void)setHasNumHomes:(BOOL)arg1;
- (void)setHasNumLocationGroups:(BOOL)arg1;
- (void)setHasNumLocations:(BOOL)arg1;
- (void)setHasNumScenes:(BOOL)arg1;
- (void)setHasNumServices:(BOOL)arg1;
- (void)setHasNumTriggers:(BOOL)arg1;
- (void)setHasNumUsers:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (void)setNumHomes:(unsigned int)arg1;
- (void)setNumLocationGroups:(unsigned int)arg1;
- (void)setNumLocations:(unsigned int)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end