//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, EKEventDetailsHighlightControl, UIView;

__attribute__((visibility("hidden")))
@interface EKEventDetailProposedTimeCell : EKEventDetailCell
{
    EKCalendarEventInvitationNotificationAttendee *_attendee;	// 24 = 0x18
    EKEventDetailsHighlightControl *_control;	// 32 = 0x20
    UIView *_topSeparator;	// 40 = 0x28
    EKEvent *_event;	// 48 = 0x30
    UIView *_bgView;	// 56 = 0x38
    _Bool _showsTopSeparator;	// 64 = 0x40
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00600000000a8a92
- (void).cxx_destruct;	// IMP=0x00000000000a9e1e
@property(nonatomic) _Bool showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
- (_Bool)update;	// IMP=0x00000000000a964d
- (_Bool)shouldDisplayForEvent;	// IMP=0x00000000000a9645
- (_Bool)hasCustomLayout;	// IMP=0x00000000000a95e7
- (void)setRoundedCorners:(unsigned long long)arg1;	// IMP=0x00000000000a9537
- (void)setSeparatorStyle:(long long)arg1;	// IMP=0x00000000000a947f
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;	// IMP=0x00000000000a8a9a

@end

