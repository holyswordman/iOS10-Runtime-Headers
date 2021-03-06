/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDuetEventManager : NSObject {
    _DKKnowledgeStore * _deleteStore;
    <_DKKnowledgeQuerying> * _queryStore;
    <_DKKnowledgeSaving> * _saveStore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) _DKKnowledgeStore *deleteStore;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *queryStore;
@property (nonatomic, retain) <_DKKnowledgeSaving> *saveStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)eventStreamForType:(unsigned long long)arg1;
+ (id)eventTypeAsString:(unsigned long long)arg1;
+ (id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)_dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)_logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5;
- (id)_queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)deleteStore;
- (id)dumpAllEvents;
- (id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)init;
- (void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5;
- (id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)queryStore;
- (void)resetAllEvents;
- (id)saveStore;
- (void)setDeleteStore:(id)arg1;
- (void)setQueryStore:(id)arg1;
- (void)setSaveStore:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
