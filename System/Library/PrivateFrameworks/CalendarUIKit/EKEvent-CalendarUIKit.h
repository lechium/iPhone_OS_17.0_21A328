//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@interface EKEvent (CalendarUIKit)
+ (_Bool)updateVirtualConference:(id)arg1 replacing:(id)arg2 with:(id)arg3;	// IMP=0x00800000000291c9
+ (id)actionStringsPluralDisplayName;	// IMP=0x008000000004aed2
+ (id)actionStringsDisplayName;	// IMP=0x008000000004ae7e
- (id)CUIK_symbolName;	// IMP=0x00100000000138d5
- (_Bool)CUIK_deleteActionShouldDeclineEvent;	// IMP=0x0010000000013750
- (void)fixInvalidatedVirtualConferenceURLs:(long long)arg1;	// IMP=0x0010000000028797
- (_Bool)CUIKEditingContext_removeWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000000286cd
- (_Bool)CUIKEditingContext_saveWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x00100000000285f6
- (id)actionStringsDisplayTitle;	// IMP=0x001000000004af26
@end
