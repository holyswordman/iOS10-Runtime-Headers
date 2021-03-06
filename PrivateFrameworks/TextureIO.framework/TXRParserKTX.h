/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRParserKTX : TXRParserBase <TXRParser> {
    unsigned int  _baseInternalFormat;
    unsigned int  _bytesOfKeyValueData;
    TXRDeferredTextureInfo * _deferredTextureInfo;
    bool  _fileIsLittleEndian;
    unsigned int  _format;
    unsigned int  _internalFormat;
    NSDictionary * _internalSizedFormatLookup;
    bool  _isCompressed;
    NSObject<OS_dispatch_queue> * _parserQueue;
    bool  _shouldFlipVertically;
    TXRTextureInfo * _textureInfo;
    unsigned int  _type;
    unsigned int  _typeSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (bool)isKTXFile:(id)arg1;

- (void).cxx_destruct;
- (bool)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4 options:(id)arg5;
- (id)init;
- (void)initializeSizedFormatTable;
- (bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)parseImageDataWithOptions:(id)arg1 bufferAllocator:(id)arg2;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)textureInfo;

@end
