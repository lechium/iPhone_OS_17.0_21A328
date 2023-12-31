//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper
{
    int mWidth;	// 40 = 0x28
    NSMutableArray *mSlideNames;	// 48 = 0x30
    NSMutableArray *mSlideGuids;	// 56 = 0x38
    NSString *mResourceUrlPrefix;	// 64 = 0x40
    NSString *mResourceUrlProtocol;	// 72 = 0x48
    OIXMLDocument *mXhtmlDoc;	// 80 = 0x50
    OIXMLElement *mBodyElement;	// 88 = 0x58
    unsigned int mNextCommit;	// 96 = 0x60
    unsigned int mCurrentSlide;	// 100 = 0x64
    _Bool mHasPushedFirstSlides;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000046f75a
- (void)finishMappingWithState:(id)arg1;	// IMP=0x00000000000b272e
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;	// IMP=0x00000000000a5ded
- (void)_pushEmptySlideWithMessage:(id)arg1;	// IMP=0x000000000046f341
- (void)startMappingWithState:(id)arg1;	// IMP=0x0000000000039e86
- (struct CGSize)slideSize;	// IMP=0x0000000000039e18
- (struct CGSize)pageSizeForDevice;	// IMP=0x000000000003a433
- (struct CGSize)pageSizeForDeviceIncludingMargins:(_Bool)arg1;	// IMP=0x000000000046f2e8
- (id)documentTitle;	// IMP=0x000000000003a65f
- (id)blipAtIndex:(unsigned int)arg1;	// IMP=0x00000000000b18e8
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;	// IMP=0x000000000046f1a8
- (id)defaultStyleSheet;	// IMP=0x000000000046f11b
- (void)setHtmlDocumentSizeInArchiver;	// IMP=0x000000000003a3ca

// Remaining properties
@property(readonly) PDPresentation *document; // @dynamic document;

@end

