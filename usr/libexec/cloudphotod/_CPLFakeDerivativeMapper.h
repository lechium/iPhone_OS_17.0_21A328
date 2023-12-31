//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CPLFakeDerivativeMapper : NSObject
{
    unsigned long long _resourceType;	// 8 = 0x8
    NSString *_outputType;	// 16 = 0x10
    double _maxPixelCount;	// 24 = 0x18
}

+ (unsigned long long)destinationresourceTypeFromShortDescription:(id)arg1;	// IMP=0x00400000000caeb4
+ (void)initialize;	// IMP=0x00100000000cae59
- (void).cxx_destruct;	// IMP=0x00200000000cb8fd
@property(readonly, nonatomic) double maxPixelCount; // @synthesize maxPixelCount=_maxPixelCount;
@property(readonly, nonatomic) NSString *outputType; // @synthesize outputType=_outputType;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)description;	// IMP=0x00100000000cb861
- (void)updateResources:(id)arg1;	// IMP=0x00100000000cb670
- (struct CGSize)_dimensionsFromBaseResource:(id)arg1;	// IMP=0x00100000000cb569
- (id)_bestSourceResourceFromResources:(id)arg1;	// IMP=0x00100000000cb269
- (id)initWithRule:(id)arg1;	// IMP=0x00100000000caedc

@end

