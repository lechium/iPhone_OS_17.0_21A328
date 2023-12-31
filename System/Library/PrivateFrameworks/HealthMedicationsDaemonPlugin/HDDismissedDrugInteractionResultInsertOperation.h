//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HDDismissedDrugInteractionResultInsertOperation : HDJournalableOperation
{
    NSArray *_dismissedResults;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000322a4
- (void).cxx_destruct;	// IMP=0x00000000000323a6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000322d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000322ac
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000032122
- (id)initWithDismissedDrugInteractionResults:(id)arg1;	// IMP=0x00000000000320b4

@end

