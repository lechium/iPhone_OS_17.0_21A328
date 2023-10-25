//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICAttachment, ICNote, UITouch, UIView;

@protocol ICAttachmentViewDelegate
- (_Bool)attachmentView:(UIView *)arg1 shouldRespondToPanGestureTouch:(UITouch *)arg2 forAttachment:(ICAttachment *)arg3;
- (void)attachmentView:(UIView *)arg1 shouldShareAttachment:(ICAttachment *)arg2;
- (void)attachmentView:(UIView *)arg1 shouldPresentAttachment:(ICAttachment *)arg2;
- (void)attachmentView:(UIView *)arg1 shouldPresentNote:(ICNote *)arg2;
@end
