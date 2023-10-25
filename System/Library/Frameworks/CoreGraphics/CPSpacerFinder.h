//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPSpacerFinder : NSObject
{
    CPZone *contentZone;	// 8 = 0x8
    struct CGRect zoneBounds;	// 16 = 0x10
    struct CGRect textBounds;	// 48 = 0x30
    struct {
        unsigned int allocatedSize;
        unsigned int size;
        unsigned int count;
        CDStruct_183601bc *stats;
        CDStruct_183601bc **ordered;
    } spacerSequence;	// 80 = 0x50
    NSMutableArray *spacers;	// 112 = 0x70
    unsigned int segmentationCount;	// 120 = 0x78
    struct {
        id _field1;
        unsigned int _field2;
        CDStruct_183601bc *_field3;
    } *segmentations;	// 128 = 0x80
    struct {
        struct CGRect _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
        unsigned int _field13;
        unsigned int _field14;
        CDStruct_c3b9c2ee _field15;
        CDStruct_c3b9c2ee _field16;
        CDStruct_c3b9c2ee _field17;
        CDStruct_c3b9c2ee _field18;
        double _field19;
        double _field20;
        _Bool _field21;
        _Bool _field22;
        _Bool _field23;
    } *qualityEntries;	// 136 = 0x88
}

- (id)spacers;	// IMP=0x00000000004976cf
- (void)splitTextLines;	// IMP=0x00000000004972ff
- (void)determineValidity;	// IMP=0x0000000000496501
- (void)assessQuality;	// IMP=0x0000000000495b9b
- (void)findSpacers;	// IMP=0x00000000004955e5
- (void)initializeJunctions;	// IMP=0x0000000000495421
- (void)initializeSegmentations;	// IMP=0x00000000004952da
- (void)dealloc;	// IMP=0x0000000000495292
- (void)finalize;	// IMP=0x0000000000495254
- (void)dispose;	// IMP=0x000000000049518e
- (id)initWithContentZone:(id)arg1;	// IMP=0x000000000049505b

@end
