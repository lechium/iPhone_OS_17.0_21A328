//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AMSUIWebFetchTreatmentsAction
{
    _Bool _includeExperimentData;	// 8 = 0x8
    _Bool _includePayload;	// 9 = 0x9
    NSArray *_areaIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2955
@property(nonatomic) _Bool includePayload; // @synthesize includePayload=_includePayload;
@property(nonatomic) _Bool includeExperimentData; // @synthesize includeExperimentData=_includeExperimentData;
@property(retain, nonatomic) NSArray *areaIds; // @synthesize areaIds=_areaIds;
- (id)runAction;	// IMP=0x00000000000a1baa
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a19a7

@end
