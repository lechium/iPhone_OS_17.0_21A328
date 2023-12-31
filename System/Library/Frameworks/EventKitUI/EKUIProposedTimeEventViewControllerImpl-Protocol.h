//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKEvent;
@protocol EKEventViewDelegate;

@protocol EKUIProposedTimeEventViewControllerImpl <NSObject>
@property(nonatomic) _Bool showsDetectedConferenceItem;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property(nonatomic) _Bool allowsCalendarPreview;
@property(nonatomic) _Bool allowsEditing;
@property(nonatomic) _Bool calendarPreviewIsInlineDayView;
@property(retain, nonatomic) EKEvent *event;
@property(nonatomic) __weak id <EKEventViewDelegate> delegate;
@end

