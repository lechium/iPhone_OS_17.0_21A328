//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BDSBookWidgetData : NSObject
{
    NSString *_assetID;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_pageProgressionDirection;	// 24 = 0x18
    NSString *_coverURL;	// 32 = 0x20
    NSNumber *_readingProgress;	// 40 = 0x28
    NSString *_libraryAssetType;	// 48 = 0x30
    NSNumber *_totalDuration;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003a03b
- (void).cxx_destruct;	// IMP=0x002000000003aded
@property(copy, nonatomic) NSNumber *totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) NSString *libraryAssetType; // @synthesize libraryAssetType=_libraryAssetType;
@property(copy, nonatomic) NSNumber *readingProgress; // @synthesize readingProgress=_readingProgress;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *pageProgressionDirection; // @synthesize pageProgressionDirection=_pageProgressionDirection;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)description;	// IMP=0x001000000003abad
- (_Bool)hasSignificantDifferenceWith:(id)arg1;	// IMP=0x001000000003a551
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003a39d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003a1c5
- (id)initWithAssetID:(id)arg1 title:(id)arg2 pageProgressionDirection:(id)arg3 coverURL:(id)arg4 readingProgress:(id)arg5 libraryAssetType:(id)arg6;	// IMP=0x001000000003a1a2
- (id)initWithAssetID:(id)arg1 title:(id)arg2 pageProgressionDirection:(id)arg3 coverURL:(id)arg4 readingProgress:(id)arg5 totalDuration:(id)arg6 libraryAssetType:(id)arg7;	// IMP=0x001000000003a043

@end

