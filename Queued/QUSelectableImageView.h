//
//  QUSelectableImageView.h
//  Queued
//
//  Created by Pawel Niewiadomski on 16.07.2013.
//  Copyright (c) 2013 Pawel Niewiadomski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface QUSelectableImageView : NSImageView

@property (readwrite, getter = isSelected) BOOL selected;

@end
