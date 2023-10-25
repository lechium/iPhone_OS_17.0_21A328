//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBarcodeDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _height;	// 24 = 0x18
    NSMutableDictionary *featureOptions;	// 32 = 0x20
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;	// IMP=0x0000000000014cbb
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000001408d
- (void)dealloc;	// IMP=0x0000000000014037
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x0000000000013ef0

@end
