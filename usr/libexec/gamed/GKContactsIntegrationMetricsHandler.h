//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKAMPController;

@interface GKContactsIntegrationMetricsHandler : NSObject
{
    GKAMPController *_ampController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000105318
@property(retain, nonatomic) GKAMPController *ampController; // @synthesize ampController=_ampController;
- (void)recordContactRelationshipsFromResults:(id)arg1;	// IMP=0x0010000000105056
- (void)recordContactInfoMatchCount:(unsigned long long)arg1;	// IMP=0x0010000000104f4c
- (id)initWithAMPController:(id)arg1;	// IMP=0x0010000000104ee1
- (id)init;	// IMP=0x0010000000104e87

@end

