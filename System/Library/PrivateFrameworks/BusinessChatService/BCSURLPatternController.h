//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSURLPatternMatchResult, NSString;
@protocol BCSDomainItemCaching, BCSMetricFactoryProtocol;

__attribute__((visibility("hidden")))
@interface BCSURLPatternController : NSObject
{
    id <BCSMetricFactoryProtocol> _metricFactory;	// 8 = 0x8
    id <BCSDomainItemCaching> _cacheManager;	// 16 = 0x10
    BCSURLPatternMatchResult *_cachedPatternMatchingResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004336d
@property(retain, nonatomic) BCSURLPatternMatchResult *cachedPatternMatchingResult; // @synthesize cachedPatternMatchingResult=_cachedPatternMatchingResult;
@property(readonly, nonatomic) id <BCSDomainItemCaching> cacheManager; // @synthesize cacheManager=_cacheManager;
@property(readonly, nonatomic) id <BCSMetricFactoryProtocol> metricFactory; // @synthesize metricFactory=_metricFactory;
- (id)mostExplicitMatchingResultFromResults:(id)arg1;	// IMP=0x00000000000430fb
- (void)matchPatternForURL:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000425ff
- (id)initWithCacheManager:(id)arg1 metricFactory:(id)arg2;	// IMP=0x0000000000042566

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

