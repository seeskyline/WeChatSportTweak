//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseTableViewCell.h"

@class EWMainPageChannelItem;

@interface EWMainPageChannelCell : EWBaseTableViewCell
{
    EWMainPageChannelItem *_channelItem;
}

+ (double)heightWithData:(id)arg1;
@property(retain, nonatomic) EWMainPageChannelItem *channelItem; // @synthesize channelItem=_channelItem;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)loadData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

