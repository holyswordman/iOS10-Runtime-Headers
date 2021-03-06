/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext * _internal;
    unsigned int  _maxBitrate;
}

@property (readonly) unsigned long long RATType;
@property (readonly) long long connectionType;
@property (readonly) unsigned char flags;
@property (readonly) BOOL linkID;
@property (readonly) unsigned int maxBitrate;
@property (readonly) unsigned short maxMTU;
@property (readonly) unsigned char networkType;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) unsigned long long remoteRATType;

- (unsigned long long)RATType;
- (long long)connectionType;
- (id)description;
- (unsigned char)flags;
- (id)initWithDummyInformation;
- (id)initWithLinkID:(BOOL)arg1 flags:(unsigned char)arg2 networkType:(unsigned char)arg3 connectionType:(long long)arg4 RATType:(unsigned long long)arg5 MTU:(unsigned short)arg6 remoteNetworkType:(unsigned char)arg7 remoteConnectionType:(long long)arg8 remoteRATType:(unsigned long long)arg9 maxBitrate:(unsigned int)arg10;
- (BOOL)linkID;
- (unsigned int)maxBitrate;
- (unsigned short)maxMTU;
- (unsigned char)networkType;
- (long long)remoteConnectionType;
- (unsigned char)remoteNetworkType;
- (unsigned long long)remoteRATType;
- (void)setMTU:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRATType:(unsigned long long)arg1;

@end
