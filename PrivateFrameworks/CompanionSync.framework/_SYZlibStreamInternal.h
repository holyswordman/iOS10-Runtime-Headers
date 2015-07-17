/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {
    char * _input;
    unsigned int  _inputSize;
    int  _lock;
    char * _output;
    unsigned int  _outputSize;
    unsigned int  _readOffset;
    unsigned int  _writeOffset;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    }  _zStream;
}

@property (nonatomic, readonly) void*inputPtr;
@property (nonatomic, readonly) int inputRoom;
@property (nonatomic, readonly) int outputAvailable;
@property (nonatomic, readonly) const void*outputPtr;

- (void)dealloc;
- (id)init;
- (void*)inputPtr;
- (int)inputRoom;
- (void)lock;
- (int)outputAvailable;
- (const void*)outputPtr;
- (int)readOutputToBuffer:(void*)arg1 length:(int)arg2;
- (int)readOutputToStream:(id)arg1;
- (void)setInputSize:(int)arg1;
- (void)setOutputSize:(int)arg1;
- (void)setStatusForStream:(id)arg1;
- (void)setZlibError:(int)arg1 forStream:(id)arg2;
- (void)synchronized:(id /* block */)arg1;
- (void)unlock;
- (int)writeInputFromBuffer:(const void*)arg1 length:(int)arg2;
- (int)writeInputFromStream:(id)arg1;

@end