/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSMutableArray;

@interface PLMomentNodeCache : NSObject  {
    NSMutableDictionary *__nodesByObjectID;
    NSMutableArray *__nodesByRowID;
    struct sqlite3 { } *__momentsDatabase;
    struct sqlite3_stmt { } *__spatialInsertStatement;
    struct sqlite3_stmt { } *__temporalInsertStatement;
    struct sqlite3_stmt { } *__spatialSelectStatement;
    struct sqlite3_stmt { } *__temporalSelectStatement;
}

@property(readonly) NSMutableDictionary * _nodesByObjectID;
@property(readonly) NSMutableArray * _nodesByRowID;
@property(readonly) struct sqlite3 { }* _momentsDatabase;
@property(readonly) struct sqlite3_stmt { }* _spatialInsertStatement;
@property(readonly) struct sqlite3_stmt { }* _temporalInsertStatement;
@property(readonly) struct sqlite3_stmt { }* _spatialSelectStatement;
@property(readonly) struct sqlite3_stmt { }* _temporalSelectStatement;


- (struct sqlite3 { }*)_momentsDatabase;
- (id)databaseURL;
- (id)_nodesByObjectID;
- (void)executePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id)arg2;
- (id)_nodesByRowID;
- (struct sqlite3_stmt { }*)_temporalSelectStatement;
- (struct sqlite3_stmt { }*)_spatialSelectStatement;
- (struct sqlite3_stmt { }*)_temporalInsertStatement;
- (struct sqlite3_stmt { }*)_spatialInsertStatement;
- (struct sqlite3_stmt { }*)prepareStatement:(const char *)arg1;
- (void)prepareAndExecuteStatement:(const char *)arg1;
- (void)setupMomentsDatabase;
- (void)closeMomentsDatabase;
- (void)openMomentsDatabase;
- (id)spatialNeighborsOfNodes:(id)arg1 forSigma:(double)arg2;
- (unsigned int)countOfTemporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)temporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)nodeWithPartialAssetDictionary:(id)arg1;
- (void)performBatch:(id)arg1;
- (id)nodeForAsset:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)insertNode:(id)arg1;

@end