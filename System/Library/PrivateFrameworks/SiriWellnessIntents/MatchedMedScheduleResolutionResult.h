//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MatchedMedScheduleResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00600000000477c0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x00600000000476c0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x00600000000475e0
+ (id)confirmationRequiredWithMatchedMedScheduleToConfirm:(id)arg1;	// IMP=0x0060000000047500
+ (id)disambiguationWithMatchedMedSchedulesToDisambiguate:(id)arg1;	// IMP=0x00600000000473b0
+ (id)successWithResolvedMatchedMedSchedule:(id)arg1;	// IMP=0x0060000000047270
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000047a10

@end
