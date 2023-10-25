//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQSDocument, SFUCryptoKey, SFUZipArchive, SFUZipInflateInputStream;

@interface GQPProcessor : NSObject
{
    struct _xmlTextReader *mReader;	// 8 = 0x8
    struct _xmlParserInputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
        unsigned long long _field9;
    } *mParserInputBuffer;	// 16 = 0x10
    SFUZipArchive *mArchive;	// 24 = 0x18
    SFUCryptoKey *mCryptoKey;	// 32 = 0x20
    unsigned long long mTotalBytesToConsume;	// 40 = 0x28
    SFUZipInflateInputStream *mInputStream;	// 48 = 0x30
    void *mStateStack;	// 56 = 0x38
    void *mActionStack;	// 64 = 0x40
    GQSDocument *mDocumentState;	// 72 = 0x48
    struct __QLPreviewRequest *mOutputPreviewRequest;	// 80 = 0x50
    struct __CFBundle *mBundle;	// 88 = 0x58
    struct CGSize mThumbnailSize;	// 96 = 0x60
    _Bool mWrongFormat;	// 112 = 0x70
    unsigned char mIsProgressive;	// 113 = 0x71
}

+ (struct _xmlTextReader *)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3;	// IMP=0x006000000003d787
+ (struct _xmlTextReader *)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id *)arg4 zipInputStream:(id *)arg5;	// IMP=0x006000000003d61d
+ (void)initialize;	// IMP=0x006000000003cee8
- (void)setWrongFormat:(_Bool)arg1;	// IMP=0x000000000003dc0a
- (_Bool)isWrongFormat;	// IMP=0x000000000003dc01
- (void)setProgressiveMode:(unsigned char)arg1;	// IMP=0x000000000003dbf8
- (void)setThumbnailSize:(struct CGSize)arg1;	// IMP=0x000000000003dbe8
- (struct CGSize)thumbnailSize;	// IMP=0x000000000003dbd8
- (id)cryptoKey;	// IMP=0x000000000003dbce
- (id)documentState;	// IMP=0x000000000003dbc4
- (void *)actionStack;	// IMP=0x000000000003dbba
- (void *)stateStack;	// IMP=0x000000000003dbb0
- (_Bool)go;	// IMP=0x000000000003daeb
- (void)setBundle:(struct __CFBundle *)arg1;	// IMP=0x000000000003dae1
- (struct __CFBundle *)bundle;	// IMP=0x000000000003daaa
- (id)archive;	// IMP=0x000000000003daa0
- (void)pushInitialState;	// IMP=0x000000000003da9a
- (void)dealloc;	// IMP=0x000000000003da02
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;	// IMP=0x000000000003d4fd
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3;	// IMP=0x000000000003d389
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;	// IMP=0x000000000003cf0a

@end
