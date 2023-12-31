//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol SFSwitchTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFSwitchTableViewCell : UITableViewCell
{
    UISwitch *_switchView;	// 8 = 0x8
    id <SFSwitchTableViewCellDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b395a
@property(nonatomic) __weak id <SFSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_switchViewStateDidChange:(id)arg1;	// IMP=0x00000000000b38a2
@property(nonatomic, getter=isSwitchOn) _Bool switchOn;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000b377f

@end

