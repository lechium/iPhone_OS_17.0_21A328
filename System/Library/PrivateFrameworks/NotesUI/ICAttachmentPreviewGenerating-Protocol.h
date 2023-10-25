//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class ICAttachment, NSManagedObjectID;

@protocol ICAttachmentPreviewGenerating <NSObject>
- (void)cancelIfNeededForAttachment:(ICAttachment *)arg1;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(NSManagedObjectID *)arg1;
- (void)generatePreviewIfNeededForAttachment:(ICAttachment *)arg1;
- (void)generatePreviewsIfNeeded;
@end
