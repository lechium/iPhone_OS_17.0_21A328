//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CRLPDFImageProvider
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    struct CGPDFDocument *_PDFDocument;	// 16 = 0x10
    struct CGSize _naturalSize;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_flushableContentLock;	// 40 = 0x28
    _Bool _hasFlushableContent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000059bd9
- (struct CGPDFDocument *)p_load;	// IMP=0x0010000000059680
- (void)p_loadIfNecessary;	// IMP=0x001000000005957d
- (void)flush;	// IMP=0x001000000005949d
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;	// IMP=0x00100000000590f6
- (_Bool)isValid;	// IMP=0x00100000000590c7
- (unsigned long long)i_flushableMemoryEstimate;	// IMP=0x0010000000059067
- (_Bool)i_hasFlushableContent;	// IMP=0x0010000000059021
- (struct CGSize)naturalSize;	// IMP=0x0010000000058f39
@property(readonly, nonatomic) long long pageAngle;
@property(readonly, nonatomic) struct CGPDFDocument *CGPDFDocument;
- (void)dealloc;	// IMP=0x0010000000058dbf
- (void)i_commonInit;	// IMP=0x0010000000058b87

@end

