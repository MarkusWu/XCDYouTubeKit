//
//  XCDYouTubeApp.h
//  PositiveQuote
//
//  Created by Markus Wu on 6/28/18.
//  Copyright © 2018 Markus Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XCDYouTubeApp : NSObject

+ (instancetype)shared;

/**
 *  The minimum size to enable showing player control on player's viweWillAppear. If the dimensons of the size of presenting view are both greater the this value, then show player control. Otherwise, do not show.
 */
@property (nonatomic, readwrite) CGSize minSizeToShowPlayerControl;

- (void)fixInlinePlayerFullScreenButtonBug;

@end
