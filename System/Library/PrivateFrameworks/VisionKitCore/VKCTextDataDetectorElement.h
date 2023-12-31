//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRDataDetectorsOutputRegion, DDScannerResult, NSArray;

__attribute__((visibility("hidden")))
@interface VKCTextDataDetectorElement
{
    _Bool _childrenCreated;	// 8 = 0x8
    NSArray *_boundingQuads;	// 16 = 0x10
    unsigned long long _dataDetectorTypes;	// 24 = 0x18
    DDScannerResult *_scannerResult;	// 32 = 0x20
    unsigned long long _crDataType;	// 40 = 0x28
    NSArray *__children;	// 48 = 0x30
}

+ (id)dataDetectorElementFromCROutputRegion:(id)arg1 parentDocument:(id)arg2;	// IMP=0x006000000009e835
- (void).cxx_destruct;	// IMP=0x000000000009fb6d
@property(nonatomic) _Bool childrenCreated; // @synthesize childrenCreated=_childrenCreated;
@property(copy, nonatomic) NSArray *_children; // @synthesize _children=__children;
@property(readonly, nonatomic) unsigned long long crDataType; // @synthesize crDataType=_crDataType;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (void)createChildrenIfNecessary;	// IMP=0x000000000009f363
- (id)debugMenu;	// IMP=0x000000000009ed62
- (id)children;	// IMP=0x000000000009ed34
- (id)boundingQuads;	// IMP=0x000000000009eb7f
@property(readonly, nonatomic) struct _NSRange characterRange;
- (id)scannerResult;	// IMP=0x000000000009eb17
- (_Bool)isUnitConversionDataDetector;	// IMP=0x000000000009eafc
- (_Bool)isTextDataDetector;	// IMP=0x000000000009eaf4
- (unsigned long long)dataType;	// IMP=0x000000000009eab0
@property(readonly, nonatomic) CRDataDetectorsOutputRegion *ddOutputRegion;
- (id)initWithScannerResult:(id)arg1;	// IMP=0x000000000009e9b9
- (id)initWithCROutputRegion:(id)arg1 parentDocument:(id)arg2;	// IMP=0x000000000009e8a7

@end

