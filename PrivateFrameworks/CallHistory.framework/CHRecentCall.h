/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHRecentCall : CHSynchronizedLoggable <NSCopying, NSSecureCoding> {
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_addressBookRecordId;
    BOOL _answered;
    NSNumber *_bytesOfDataUsed;
    NSMutableArray *_callOccurrences;
    unsigned int _callStatus;
    unsigned int _callType;
    NSString *_callerId;
    unsigned int _callerIdAvailability;
    BOOL _callerIdIsBlocked;
    BOOL _callerIdIsFormatted;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    NSString *_callerName;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkName;
    NSString *_callerNetworkSecondName;
    NSDate *_date;
    NSString *_devicePhoneId;
    NSNumber *_disconnectedCause;
    double _duration;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    BOOL _mobileOriginated;
    BOOL _multiCall;
    <CHPhoneBookManagerProtocol> *_phoneBookManager;
    BOOL _read;
    NSString *_uniqueId;
    unsigned int _unreadCount;
}

@property (nonatomic, copy) NSString *addressBookCallerIDMultiValueId;
@property (nonatomic, copy) NSString *addressBookRecordId;
@property BOOL answered;
@property (nonatomic, copy) NSNumber *bytesOfDataUsed;
@property (nonatomic, retain) NSMutableArray *callOccurrences;
@property unsigned int callStatus;
@property unsigned int callType;
@property (copy) NSString *callerId;
@property (nonatomic) unsigned int callerIdAvailability;
@property BOOL callerIdIsBlocked;
@property BOOL callerIdIsFormatted;
@property (nonatomic, copy) NSString *callerIdLabel;
@property (nonatomic, copy) NSString *callerIdLocation;
@property (nonatomic, copy) NSString *callerName;
@property (copy) NSString *callerNetworkFirstName;
@property (nonatomic, copy) NSString *callerNetworkName;
@property (copy) NSString *callerNetworkSecondName;
@property (copy) NSDate *date;
@property (copy) NSString *devicePhoneId;
@property (nonatomic, copy) NSNumber *disconnectedCause;
@property double duration;
@property (copy) NSString *isoCountryCode;
@property (copy) NSString *mobileCountryCode;
@property (copy) NSString *mobileNetworkCode;
@property BOOL mobileOriginated;
@property BOOL multiCall;
@property (retain) <CHPhoneBookManagerProtocol> *phoneBookManager;
@property (nonatomic) BOOL read;
@property (copy) NSString *uniqueId;
@property unsigned int unreadCount;

+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (id)addressBookCallerIDMultiValueId;
- (id)addressBookCallerIDMultiValueIdSync;
- (void)addressBookChanged;
- (id)addressBookRecordId;
- (id)addressBookRecordIdSync;
- (BOOL)answered;
- (id)bytesOfDataUsed;
- (id)callOccurrences;
- (id)callOccurrencesAsStringSync;
- (id)callOccurrencesSync;
- (unsigned int)callStatus;
- (unsigned int)callType;
- (id)callerId;
- (unsigned int)callerIdAvailability;
- (id)callerIdForDisplay;
- (id)callerIdForDisplaySync;
- (BOOL)callerIdIsBlocked;
- (BOOL)callerIdIsEmailAddress;
- (BOOL)callerIdIsEmailAddressSync;
- (BOOL)callerIdIsFormatted;
- (id)callerIdLabel;
- (id)callerIdLabelSync;
- (id)callerIdLocation;
- (id)callerIdLocationSync;
- (id)callerIdSubStringForDisplay;
- (id)callerName;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)callerNameSync;
- (id)callerNetworkFirstName;
- (id)callerNetworkName;
- (id)callerNetworkSecondName;
- (BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createOccurrenceArraySync;
- (id)date;
- (id)description;
- (id)devicePhoneId;
- (id)disconnectedCause;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAndSetAddressBookIdsSync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (BOOL)isAddressBookContactASuggestion;
- (BOOL)isAddressBookContactASuggestionSync;
- (BOOL)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (BOOL)mobileOriginated;
- (BOOL)multiCall;
- (unsigned int)numberOfOccurrences;
- (unsigned int)numberOfOccurrencesSync;
- (id)phoneBookManager;
- (BOOL)read;
- (BOOL)representsCallAtDate:(id)arg1;
- (void)setAddressBookCallerIDMultiValueId:(id)arg1;
- (void)setAddressBookRecordId:(id)arg1;
- (void)setAnswered:(BOOL)arg1;
- (void)setBytesOfDataUsed:(id)arg1;
- (void)setCallOccurrences:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setCallerId:(id)arg1;
- (void)setCallerIdAvailability:(unsigned int)arg1;
- (void)setCallerIdIsBlocked:(BOOL)arg1;
- (void)setCallerIdIsFormatted:(BOOL)arg1;
- (void)setCallerIdLabel:(id)arg1;
- (void)setCallerIdLocation:(id)arg1;
- (void)setCallerName:(id)arg1;
- (void)setCallerNetworkFirstName:(id)arg1;
- (void)setCallerNetworkName:(id)arg1;
- (void)setCallerNetworkSecondName:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDevicePhoneId:(id)arg1;
- (void)setDisconnectedCause:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileOriginated:(BOOL)arg1;
- (void)setMultiCall:(BOOL)arg1;
- (void)setPhoneBookManager:(id)arg1;
- (void)setRead:(BOOL)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUnreadCount:(unsigned int)arg1;
- (id)uniqueId;
- (unsigned int)unreadCount;

@end