//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKUIAppReviewPrompter-Protocol.h"
#import "NSObject-Protocol.h"

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, InboxNewSectionViewController;

@protocol InboxNewSectionViewControllerDelegate <NSObject, EKUIAppReviewPrompter>
- (void)inboxNewSectionViewController:(InboxNewSectionViewController *)arg1 viewProposedTimeForAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg2 onEvent:(EKEvent *)arg3;
- (void)inboxNewSectionViewController:(InboxNewSectionViewController *)arg1 viewCommentsForEvent:(EKEvent *)arg2;
- (void)inboxNewSectionViewController:(InboxNewSectionViewController *)arg1 inspectEvent:(EKEvent *)arg2;
- (void)inboxNewSectionViewController:(InboxNewSectionViewController *)arg1 shouldCloseAnimated:(_Bool)arg2;
@end

