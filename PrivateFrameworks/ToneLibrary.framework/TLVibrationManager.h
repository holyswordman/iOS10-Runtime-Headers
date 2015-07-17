/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationManager : NSObject {
    TLAccessQueue *_accessQueue;
    BOOL _allowsAutoRefresh;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    BOOL _needsRefresh;
    unsigned int _specialBehaviors;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
}

@property (setter=_setAccessQueue:, retain) TLAccessQueue *_accessQueue;
@property (setter=_setAllowsAutoRefresh:, nonatomic) BOOL _allowsAutoRefresh;
@property (setter=_setCachedSystemVibrationPatterns:, nonatomic, retain) NSDictionary *_cachedSystemVibrationPatterns;
@property (setter=_setCachedUserGeneratedVibrationPatterns:, nonatomic, retain) NSDictionary *_cachedUserGeneratedVibrationPatterns;
@property (setter=_setSpecialBehaviors:, nonatomic) unsigned int _specialBehaviors;
@property (nonatomic, readonly) NSDictionary *_systemVibrationPatterns;
@property (setter=_setTransientNanoPreferencesDomainAccessor:, nonatomic, retain) NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
@property (getter=_isUnitTestingModeEnabled, nonatomic, readonly) BOOL _unitTestingModeEnabled;
@property (nonatomic, readonly) NSDictionary *_userGeneratedVibrationPatterns;
@property (nonatomic) BOOL allowsAutoRefresh;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic, readonly) BOOL shouldVibrateForCurrentRingerSwitchState;
@property (nonatomic, readonly) BOOL shouldVibrateOnRing;
@property (nonatomic, readonly) BOOL shouldVibrateOnSilent;

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned int)arg1 atInitiativeOfVibrationManager:(id)arg2;
+ (id)sharedVibrationManager;

- (id)_accessQueue;
- (BOOL)_allowsAutoRefresh;
- (BOOL)_booleanPreferenceForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (id)_cachedSystemVibrationPatterns;
- (id)_cachedUserGeneratedVibrationPatterns;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL*)arg3;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned int)arg3;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_initWithSpecialBehaviors:(unsigned int)arg1;
- (BOOL)_isUnitTestingModeEnabled;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (BOOL)_migrateLegacySettings;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_newServiceConnection;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
- (void)_performBlockInAccessQueue:(id /* block */)arg1;
- (BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (void)_setAccessQueue:(id)arg1;
- (void)_setAllowsAutoRefresh:(BOOL)arg1;
- (void)_setCachedSystemVibrationPatterns:(id)arg1;
- (void)_setCachedUserGeneratedVibrationPatterns:(id)arg1;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)_setNeedsRefresh:(BOOL)arg1;
- (void)_setSpecialBehaviors:(unsigned int)arg1;
- (void)_setTransientNanoPreferencesDomainAccessor:(id)arg1;
- (BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2;
- (unsigned int)_specialBehaviors;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
- (id)_systemVibrationPatterns;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1;
- (id)_transientNanoPreferencesDomainAccessor;
- (id)_userGeneratedVibrationPatterns;
- (BOOL)_vibrationIsSettableForAlertType:(int)arg1;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (BOOL)allowsAutoRefresh;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (void)dealloc;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (BOOL)needsRefresh;
- (id)noneVibrationName;
- (id)noneVibrationPattern;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2;
- (BOOL)refresh;
- (void)setAllowsAutoRefresh:(BOOL)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)shouldVibrateForCurrentRingerSwitchState;
- (BOOL)shouldVibrateOnRing;
- (BOOL)shouldVibrateOnSilent;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;

@end